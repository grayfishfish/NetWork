#ifndef MULTIEDGES_H
#define MULTIEDGES_H

#include <QGLWidget>

namespace Ui {
class MultiEdges;
}

class MultiEdges : public QGLWidget
{
    Q_OBJECT

public:
    explicit MultiEdges(QWidget *parent = 0, const char *name=0, bool fs=false);
    ~MultiEdges();

private:
    Ui::MultiEdges *ui;

protected:

  void initializeGL();
  void paintGL();
  void resizeGL( int width, int height );

   void keyPressEvent( QKeyEvent *e );

   void timerEvent(QTimerEvent *event);

   void loadGLTextures();
  //在这个函数中我们会载入指定的图片并生成相应当纹理。


protected:
   bool fullscreen;
   GLfloat xRot, yRot, zRot;
   GLfloat zoom;
   GLfloat xSpeed, ySpeed;
   GLuint texture[3];
   GLuint filter;

   bool light;

};

#endif // MULTIEDGES_H
