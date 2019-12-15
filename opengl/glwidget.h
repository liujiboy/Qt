#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>

class GLWidget : public QGLWidget
{
	Q_OBJECT
	public:
		GLWidget( QWidget* parent = 0 );

	protected:
		virtual void initializeGL();
		virtual void resizeGL( int w, int h );
		virtual void paintGL();


};

#endif // GLWIDGET_H
