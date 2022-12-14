//MENGGAMBAR POLYGON TIAP SISI BEDA WARNA

#include <windows.h>
#include <GL/glut.h>

void polygon() {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0,1.0,0.0,0.5);

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.6);

    glVertex2f(0.0,0.5);
    glVertex2f(-0.5,0.0);
    glVertex2f(0.0,-0.5);
    glVertex2f(0.5,0.0);

    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(0.0,0.0,1.0); //garis 1
    glVertex2f(0.0,0.5);
    glVertex2f(-0.5,0.0);

    glColor3f(0.0,1.0,0.0); //garis 2
    glVertex2f(-0.5,0.0);
    glVertex2f(0.0,-0.5);

    glColor3f(1.0,0.0,0.0); //garis 3
    glVertex2f(0.0,-0.5);
    glVertex2f(0.5,0.0);

    glColor3f(1.0,0.1,1.0); //garis 4
    glVertex2f(0.5,0.0);
    glVertex2f(0.0,0.5);

    glEnd();
    glFlush();
}

int main (int argc, char **argv) {
    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("Gambar Poligon");
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}
