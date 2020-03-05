#define GLM_FORCE_RADIANS

#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include "glm/glm.hpp"
#include <QKeyEvent>
#include "glm/gtc/matrix_transform.hpp"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();
    
  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();
 
    // resize - Es cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);  
    
    virtual void keyPressEvent(QKeyEvent *e);
    
    virtual void modelTransform();
  private:
    void creaBuffers ();
    void carregaShaders();
    
    // attribute locations
    GLuint vertexLoc;
    GLuint sizeLoc;
    GLuint colorLoc;
    GLuint varLoc;
    GLuint transLoc;
    // Program
    QOpenGLShaderProgram *program;

    GLuint VAO1;
    GLint ample, alt;
    float scl;
    float tx,ty,tz;
};