#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void Draw()
{

    float theta;
glClear(GL_COLOR_BUFFER_BIT);
//white background

//red background
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2d(50.0,25.0);
glVertex2d(-50.0,25.0);
glVertex2d(-50.0,-25.0);
glVertex2d(50.0,-25.0);
glEnd();
glFlush();



glColor3ub(205,46,58);
glBegin(GL_POLYGON);
for(int i=-100;i<=180;i++){
theta=i*3.142/180;
glVertex2f(11*cos(theta),11*sin(theta));
}
glEnd();
glFlush();






glColor3ub(0,71,166);
glBegin(GL_POLYGON);
for(int i=150;i<=350;i++){
theta=i*3.142/180;
glVertex2f(11*cos(theta),11*sin(theta));
}
glEnd();
glFlush();




glColor3ub(205,46,58);
glBegin(GL_POLYGON);
for(int i=0;i<=360;i++){
theta=i*3.142/180;
glVertex2f(-4.6+5.5*cos(theta),3+5.5*sin(theta));
}
glEnd();
glFlush();

glColor3ub(0,71,166);
glBegin(GL_POLYGON);
for(int i=0;i<=360;i++){
theta=i*3.142/180;
glVertex2f(5.37+5.5*cos(theta),-1.40+5.5*sin(theta));
}
glEnd();
glFlush();


glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-15,19);
glVertex2f(-17,17);
glVertex2f(-16.5,16.5);
glVertex2f(-14.5,18.5);
glEnd();
glFlush();


glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-16,19.5);
glVertex2f(-18,17.5);
glVertex2f(-17.5,17);
glVertex2f(-15.5,19);
glEnd();
glFlush();

glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-14,18.5);
glVertex2f(-16,16.5);
glVertex2f(-15.5,16);
glVertex2f(-13.5,18);
glEnd();
glFlush();



glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(15,19);
glVertex2f(17,17);
glVertex2f(16.5,16.5);
glVertex2f(14.5,18.5);
glEnd();
glFlush();


glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(16,19.5);
glVertex2f(18,17.5);
glVertex2f(17.5,17);
glVertex2f(15.5,19);
glEnd();
glFlush();

glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(14,18.5);
glVertex2f(16,16.5);
glVertex2f(15.5,16);
glVertex2f(13.5,18);
glEnd();
glFlush();



glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(15,-19);
glVertex2f(17,-17);
glVertex2f(16.5,-16.5);
glVertex2f(14.5,-18.5);
glEnd();
glFlush();


glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(16,-19.5);
glVertex2f(18,-17.5);
glVertex2f(17.5,-17);
glVertex2f(15.5,-19);
glEnd();
glFlush();

glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(14,-18.5);
glVertex2f(16,-16.5);
glVertex2f(15.5,-16);
glVertex2f(13.5,-18);
glEnd();
glFlush();



glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-15,-19);
glVertex2f(-17,-17);
glVertex2f(-16.5,-16.5);
glVertex2f(-14.5,-18.5);
glEnd();
glFlush();


glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-16,-19.5);
glVertex2f(-18,-17.5);
glVertex2f(-17.5,-17);
glVertex2f(-15.5,-19);
glEnd();
glFlush();

glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-14,-18.5);
glVertex2f(-16,-16.5);
glVertex2f(-15.5,-16);
glVertex2f(-13.5,-18);
glEnd();
glFlush();


}

void Initialize()
{

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-50.0, 50.0, -25.0, 25.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1100,600);
glutInitWindowPosition(300,300);
glutCreateWindow("Flag of South Korea");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}


