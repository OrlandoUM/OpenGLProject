#include "MeuPainelOpenGL.h"
#include <cmath>
#include<stdlib.h>
#include "GL/glu.h"

MeuPainelOpenGL::MeuPainelOpenGL(QWidget *parent) :
    QGLWidget(parent)
{

    setFormat(QGL::DoubleBuffer | QGL::DepthBuffer);


    tamanhoMalha = 25;
    malha_Selected = true;

    nPoligonos = 0;
    poligonoatual = 0;

    glInitNames(); //cria Pilha vazia
}

void MeuPainelOpenGL::alterarLados(int l){
    if (l != vlados[poligonoatual] && vlados[poligonoatual] >= 3 && vlados[poligonoatual] <= 60)
        vlados[poligonoatual] = l;
    updateGL();
}

void MeuPainelOpenGL::alterarRaio(double r){
    if (r != vraios[poligonoatual] && r >= 1.0 && r <= 5.0)
        vraios[poligonoatual] = r;
    updateGL();
}

/*------------------MALHA-----------------*/
void MeuPainelOpenGL::alterarMalha(int malha){
    if(malha != tamanhoMalha){
        tamanhoMalha = malha;
        updateGL();
    }
}
void MeuPainelOpenGL::ocultarMalha(bool malha){
    malha_Selected = !malha;
    updateGL();
}
void MeuPainelOpenGL::construirMalha(){
    glLineWidth(1);
    glColor3f(0, 0, 0);

    for(int x1 = 0, y1 = 0, x2 = 0, y2 = tamanhoMalha; x1 <= y2; x1 ++, x2++){
        glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glEnd();
    }

    for(int x1 = 0, y1 = 0, x2 = tamanhoMalha, y2 = 0; y1 <= x2; y1 ++, y2++){
        glBegin(GL_LINES);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glEnd();
    }
}

/*-----------------POLIGONOS-------------*/
void MeuPainelOpenGL::numeroPoligonos(int num){
    if(num != nPoligonos && num >= 0 && num <= 5){
        poligonoatual= num-1;
        glPushName(num-1); //add nome na pilha
        if(num>nPoligonos){
            vlados[poligonoatual] = 3;
            vraios[poligonoatual] = 1.0;
            vvermelho[poligonoatual] = 1;
            vverde[poligonoatual] = 0;
            vazul[poligonoatual] = 0;
        }
        else{
            glPopName();
        }
        nPoligonos = num;
        updateGL();
    }    
}

/*------------------COR------------------*/
void MeuPainelOpenGL::alterarCor(int j){
    glColor3f(vvermelho[j], vverde[j], vazul[j]);
}
void MeuPainelOpenGL::setCorVermelho(double vm){
    vvermelho[poligonoatual] = vm;
    updateGL();
}
void MeuPainelOpenGL::setCorVerde(double vd){
    vverde[poligonoatual] = vd;
    updateGL();
}
void MeuPainelOpenGL::setCorAzul(double a){
    vazul[poligonoatual] = a;
    updateGL();
}

/*---------------MOUSE--------------mouse picking*/
/*void MeuPainelOpenGL::Mouse (int button, int state, int mx, int my){
    GLuint selectBuf[512];
    switch (button){
        case GLUT_LEFT_BUTTON:
            if(state == GLUT_DOWN){
                x = mx;
                y = glutGet(GLUT_WINDOW_HEIGHT) - my;
                updateGL();
            }
         break;
     }
}
void MeuPainelOpenGL::Mouse (GLdouble x, GLdouble y, GLdouble width, GLdouble height, GLin viewport[4]){

}
*/

void MeuPainelOpenGL::initializeGL(){
    glShadeModel(GL_SMOOTH);

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); //cor que limpa a tela
    glClearDepth(1.0);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void MeuPainelOpenGL::resizeGL(int width, int height){
    double menorX = 0, maiorX = 25, menorY = 0, maiorY = 25;
    glViewport( 0, 0, (GLint)width, (GLint)height );

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1,1,-1,1);

    if (width > height)
    {
        height = height?height:1;
        double novaLargura = (maiorX - menorX) * width / height;
        double difLargura = novaLargura - (maiorX - menorX);
        menorX = 0.0 - difLargura / 2.0;
        maiorX = 25 + difLargura / 2.0;
    }
    else
    {
        width = width?width:1;
        double novaAltura = (maiorY - menorY) * height / width;
        double difAltura = novaAltura - (maiorY - menorY);
        menorY = 0.0 - difAltura / 2.0;
        maiorY = 25 + difAltura / 2.0;
    }
    gluOrtho2D(menorX, maiorX, menorY, maiorY);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MeuPainelOpenGL::paintGL(){
    if(nPoligonos != 0){

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();


        //MALHA
        if(malha_Selected == true){
            construirMalha();
        }

        for(int j = 1; j <= nPoligonos; j++){

        glPushName(j-1);
        glTranslated(j+1, j+1, 0.0);
        alterarCor(j-1);
        glBegin(GL_POLYGON);
            for (int i = 0; i < vlados[j-1]; ++i)
                glVertex2f(vraios[j-1]*cos(i*2*3.14159265/vlados[j-1]),
                           vraios[j-1]*sin(i*2*3.14159265/vlados[j-1]));
        glEnd();
        }

    }
    else{
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        //MALHA
        if(malha_Selected == true){
            construirMalha();
        }
    }
}
