#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>

namespace Ui {
class MyGLWidget;
}

class MyGLWidget : public QGLWidget
{
    Q_OBJECT

public:
    explicit MyGLWidget(QWidget *parent = 0);
    ~MyGLWidget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

private:
    Ui::MyGLWidget *ui;
};

#endif // MYGLWIDGET_H
