#ifndef MEUPAINELOPENGL_H
#define MEUPAINELOPENGL_H

#include <QGLWidget>

class MeuPainelOpenGL : public QGLWidget
{
Q_OBJECT
public:
    explicit MeuPainelOpenGL(QWidget *parent = 0);

signals:

public slots: //eventos
    void alterarLados(int l);
    void alterarRaio(double r);

    //MALHA
    void alterarMalha(int malha);
    void ocultarMalha(bool malha);
    void construirMalha();


    void numeroPoligonos(int num);

    //COR
    void alterarCor(int j);
    void setCorVermelho(double vm);
    void setCorVerde(double vd);
    void setCorAzul(double a);

    //MOUSE
    /*void MouseAndandoPressionado (int x, int y);
    void movimentacao();
    */

protected: //tem que ter
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

private: //atributos. Estão no formulário
    int lados;
    double raio;
    int vlados[100];
    double vraios[100];
    double vvermelho[100];
    double vazul[100];
    double vverde[100];
    int vid[100];
    int poligonoatual;

    int tamanhoMalha;
    bool malha_Selected;

    int nPoligonos;

    double vermelho;
    double verde;
    double azul;

    GLuint selectBuf[512];
};

#endif // MEUPAINELOPENGL_H
