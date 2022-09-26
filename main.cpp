#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glPointSize(8.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 0.0, 1.0);       //Warna ungu
    glVertex3f(0.1, 0.1, 0.0);
    glColor3f(1.0, 1.0, 0.0);       //Warna kuning
    glVertex3f(0.3, 0.3, 0.0);
    glColor3f(1.0, 0.0, 0.0);       //Warna merah
    glVertex3f(0.2, 0.2, 0.0);
    glColor3f(0.0, 0.0, 1.0);       //Warna biru
    glVertex3f(0.3, 0.1, 0.0);
    glColor3f(0.0, 0.5, 1.0);       //Warna cyan
    glVertex3f(0.1, 0.3, 0.0);
    glColor3f(1.0, 1.0, 1.0);       //Warna putih
    glVertex3f(0.2, 0.4, 0.0);

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
