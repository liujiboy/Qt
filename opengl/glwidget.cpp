#include "glwidget.h"

#include <QCoreApplication>
#include <QKeyEvent>
#include <OpenGL/GLU.h>

GLWidget::GLWidget( QWidget* parent )
    : QGLWidget( parent )
{
}
void GLWidget::initializeGL()
{
}

void GLWidget::resizeGL( int w, int h )
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45,(float)w/(float)h,0.1,100);
}

void GLWidget::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0f,0.0f,5.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
	glColor3f(1.0f,0.0f,0.0f);
	glBegin(GL_TRIANGLES);
		glVertex3f(0.0f,0.0f,0.0f);
		glVertex3f(1.0f,0.0f,0.0f);
		glVertex3f(0.0f,1.0f,0.0f);

		glVertex3f(-3.0f,0.0f,-1.0f);
		glVertex3f(-4.0f,0.0f,-1.0f);
		glVertex3f(-3.0f,1.0f,-1.0f);
	glEnd();
}
