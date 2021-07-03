#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>



void display()
{glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.6f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.6f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.6f,0.0f);
    glVertex2f(0.3f,-0.5f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.3f,-0.5f);
    glVertex2f(0.0f,-0.6f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,-0.6f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.6f,0.0f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.6f,0.0f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(-0.3f,0.4f);
    glEnd();






    glFlush();

}

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Lab2");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;



}
