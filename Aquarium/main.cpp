/*
 *  Title        : Aquarium simulation
 *  Name         : Varun Kumar
 *  Roll Number  : ICM2014008
 */

#include <GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

float fish1_move = 0.0f;
int fish1_flag = 1;

void init2D(float r, float g, float b)
{
    glClearColor(r, g, b, 0.0);
    glMatrixMode(GL_PROJECTION);
    glDepthFunc(GL_LEQUAL);
    gluOrtho2D(-1000.0, 1000.0, -600.0, 600.0);
}

//Water backgorund
void water()
{
    glBegin(GL_POLYGON);
    glColor3f(0.258,0.325,0.956);
    glVertex3f(-1000.0, -600.0, 0);
    glColor3f(0.258,0.325,0.956);
    glVertex3f(1000.0, -600.0, 0);
    glColor3f(0.250,0.878,0.815);
    glVertex3f(1000.0, 600.0, 0.0);
    glColor3f(0.250,0.878,0.815);
    glVertex3f(-1000.0, 600.0, 0);
    glEnd();
}

//Stone Layer 1
void stones1()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(-1000.0f, -600.0f, 1.0f);

    //Stone 1
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(0.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(10.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(30.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(50.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(60.0, 0.0, 0);
    glEnd();

    //Stone 2
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(60.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(80.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(140.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(180.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(190.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(210.0, 0.0, 0);
    glEnd();

    //Stone 3
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(210.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(215.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(230.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(245.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(255.0, 0.0, 0);
    glEnd();

    //Stone 4
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(255.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(260.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(275.0, 15.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(290.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(300.0, 0.0, 0);
    glEnd();

    //Stone 5
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(350.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(370.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(410.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(440.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(450.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(480.0, 0.0, 0);
    glEnd();

    //Stone 6
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(500.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(505.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(520.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(535.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(545.0, 0.0, 0);
    glEnd();

    //Stone 7
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(590.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(600.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(620.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(640.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(650.0, 0.0, 0);
    glEnd();

    //Stone 8
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(650.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(670.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(770.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(810.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(820.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(830.0, 0.0, 0);
    glEnd();

    //Stone 9
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(885.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(895.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(915.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(935.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(945.0, 0.0, 0);
    glEnd();

    //Stone 10
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(945.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(965.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(970.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(990.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(1000.0, 0.0, 0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Seaweed layer 1
void seaweed1()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(-1000.0f, -600.0f, 1.0f);

    //Seaweed 1
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(300.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(295.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(325.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(335.0, 100.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(345.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(330.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(340.0, 0.0, 0);
    glEnd();

    //Seaweed 2
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(310.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(305.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(335.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(345.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(355.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(340.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(350.0, 0.0, 0);
    glEnd();

    //Seaweed 3
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(830.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(825.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(855.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(865.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(875.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(860.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(870.0, 0.0, 0);
    glEnd();

    //Seaweed 4
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(545.0, 0.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(550.0, 50.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 100.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(550.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 130.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(560.0, 140.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 150.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 140.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(570.0, 130.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(575.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(595.0, 100.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(580.0, 50.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(590.0, 0.0, 0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
}

//Stone Layer 2
void stones2()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(1.0f, -600.0f, 1.0f);

    //Stone 1
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(0.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(10.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(30.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(50.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(60.0, 0.0, 0);
    glEnd();

    //Stone 2
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(60.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(80.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(140.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(180.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(190.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(210.0, 0.0, 0);
    glEnd();

    //Stone 3
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(210.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(215.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(230.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(245.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(255.0, 0.0, 0);
    glEnd();

    //Stone 4
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(255.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(260.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(275.0, 15.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(290.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(300.0, 0.0, 0);
    glEnd();

    //Stone 5
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(350.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(370.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(410.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(440.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(450.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(480.0, 0.0, 0);
    glEnd();

    //Stone 6
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(500.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(505.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(520.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(535.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(545.0, 0.0, 0);
    glEnd();

    //Stone 7
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(590.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(600.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(620.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(640.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(650.0, 0.0, 0);
    glEnd();

    //Stone 8
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(650.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(670.0, 40.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(770.0, 60.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(810.0, 50.0, 0);
    glColor3f(0.600,0.294,0.030);
    glVertex3f(820.0, 40.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(830.0, 0.0, 0);
    glEnd();

    //Stone 9
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(885.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(895.0, 20.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(915.0, 28.0, 0.0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(935.0, 20.0, 0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(945.0, 0.0, 0);
    glEnd();

    //Stone 10
    glBegin(GL_POLYGON);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(945.0, 0.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(965.0, 10.0, 0);
    glColor3f(0.717,0.352,0.054);
    glVertex3f(970.0, 15.0, 0);
    glColor3f(0.278,0.125,0.003);
    glVertex3f(990.0, 8.0, 0.0);
    glColor3f(0.200,0.094,0.000);
    glVertex3f(1000.0, 0.0, 0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Seaweed layer 2
void seaweed2()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f, -600.0f, 1.0f);

    //Seaweed 1
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(300.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(295.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(325.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(335.0, 100.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(345.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(330.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(340.0, 0.0, 0);
    glEnd();

    //Seaweed 2
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(310.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(305.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(335.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(345.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(355.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(340.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(350.0, 0.0, 0);
    glEnd();

    //Seaweed 3
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(830.0, 0.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(825.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(855.0, 60.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(865.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(875.0, 60.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(860.0, 20.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(870.0, 0.0, 0);
    glEnd();

    //Seaweed 4
    glBegin(GL_POLYGON);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(545.0, 0.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(550.0, 50.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 100.0, 0.0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(550.0, 20.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 130.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(560.0, 140.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 150.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(565.0, 140.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(570.0, 130.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(575.0, 120.0, 0);
    glColor3f(0.380,0.878,0.094);
    glVertex3f(595.0, 100.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(580.0, 50.0, 0);
    glColor3f(0.074,0.349,0.011);
    glVertex3f(590.0, 0.0, 0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
}


//Fish 1
void fish1()
{
    glLoadIdentity();
    glPushMatrix();

    if(fish1_flag == 1)
    {
        glTranslatef(fish1_move, 0.0f, 0.0f);
    }
    else
    {
        glTranslatef(-1*fish1_move, 0.0f, 0.0f);
        glScalef(-1.0f, 1.0f, 1.0f);
    }


    //Tail
    glBegin(GL_POLYGON);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(530.0, 340.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(500.0, 300.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(550.0, 280.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 350.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(550.0, 400.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(500.0, 380.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(530.0, 340.0, 0.0);
    glEnd();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(650.0, 300.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(700.0, 340.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(650.0, 380.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 350.0, 0.0);
    glEnd();

    //Eye
    glBegin( GL_POINTS );
    glColor3f(1, 1, 1);
    glVertex2f(680.0, 340.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Fish 2
void fish2()
{
    glLoadIdentity();
    glPushMatrix();

    if(fish1_flag == 1)
    {
        glTranslatef(-1*(fish1_move/5), 0.0f, 0.0f);
    }
    else
    {
        glTranslatef((fish1_move/5), 0.0f, 0.0f);
        glScalef(-1.0f, 1.0f, 1.0f);
    }


    glTranslatef(100.0f, -800.0f, 0.0f);
    glScalef(-1.5f, 1.5f, 0.0f);


    //Tail
    glBegin(GL_POLYGON);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(530.0, 340.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(500.0, 300.0, 0.0);
    glColor3f(1.000,0.0,0.498);
    glVertex3f(550.0, 280.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(600.0, 350.0, 0.0);
    glColor3f(1.000,0.0,0.498);
    glVertex3f(550.0, 400.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(500.0, 380.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(530.0, 340.0, 0.0);
    glEnd();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(1.000,0.0,0.498);
    glVertex3f(650.0, 300.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(700.0, 340.0, 0.0);
    glColor3f(1.000,0.0,0.498);
    glVertex3f(650.0, 380.0, 0.0);
    glColor3f(0.298,0.000,0.600);
    glVertex3f(600.0, 350.0, 0.0);
    glEnd();

    //Eye
    glBegin( GL_POINTS );
    glColor3f(1, 1, 1);
    glVertex2f(680.0, 340.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Fish 3
void fish3()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f, -800.0f, 0.0f);

    if(fish1_flag == 0)
    {
        glTranslatef(fish1_move, 0.0f, 0.0f);
    }
    else
    {
        glTranslatef(-1*fish1_move, 0.0f, 0.0f);
        glScalef(-1.0f, 1.0f, 1.0f);
    }


    //Tail
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(530.0, 340.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(500.0, 300.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(550.0, 280.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(600.0, 350.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(550.0, 400.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(500.0, 380.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(530.0, 340.0, 0.0);
    glEnd();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(650.0, 300.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(700.0, 340.0, 0.0);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(650.0, 380.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(600.0, 350.0, 0.0);
    glEnd();

    //Eye
    glBegin( GL_POINTS );
    glColor3f(1, 1, 1);
    glVertex2f(680.0, 340.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Fish 4
void fish4()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(-200.0f, -500.0f, 0.0f);

    if(fish1_flag == 1)
    {
        glTranslatef(fish1_move, 0.0f, 0.0f);
    }
    else
    {
        glTranslatef(-1*fish1_move, 0.0f, 0.0f);
        glScalef(-1.0f, 1.0f, 1.0f);
    }


    //Tail
    glBegin(GL_POLYGON);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(530.0, 340.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(500.0, 300.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(550.0, 280.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 350.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(550.0, 400.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(500.0, 380.0, 0.0);
    glColor3f(0.964,0.976,0.172);
    glVertex3f(530.0, 340.0, 0.0);
    glEnd();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(650.0, 300.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(700.0, 340.0, 0.0);
    glColor3f(0.000,0.039,0.337);
    glVertex3f(650.0, 380.0, 0.0);
    glColor3f(0.098,0.203,1.000);
    glVertex3f(600.0, 350.0, 0.0);
    glEnd();

    //Eye
    glBegin( GL_POINTS );
    glColor3f(1, 1, 1);
    glVertex2f(680.0, 340.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Fish 5
void fish5()
{
    glLoadIdentity();
    glPushMatrix();



    if(fish1_flag == 1)
    {
        glTranslatef(fish1_move/2, 0.0f, 0.0f);
    }
    else
    {
        glTranslatef(-1*(fish1_move/2), 0.0f, 0.0f);
        glScalef(-1.0f, 1.0f, 1.0f);
    }

    glTranslatef(-1000.0f, -600.0f, 0.0f);
    glScalef(2.0f, 2.0f, 0.0f);


    //Tail
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(530.0, 340.0, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(500.0, 300.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(550.0, 280.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(600.0, 350.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(550.0, 400.0, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(500.0, 380.0, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(530.0, 340.0, 0.0);
    glEnd();

    //Head
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(600.0, 330.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(650.0, 300.0, 0.0);
    glColor3f(0.2,0.0,0.0);
    glVertex3f(700.0, 340.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(650.0, 380.0, 0.0);
    glColor3f(0.4,0.0,0.0);
    glVertex3f(600.0, 350.0, 0.0);
    glEnd();

    //Eye
    glBegin( GL_POINTS );
    glColor3f(1, 1, 1);
    glVertex2f(680.0, 340.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();

}

//Displaying elements
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    water();
    stones1();
    seaweed1();
    stones2();
    seaweed2();
    fish1();
    fish2();
    fish3();
    fish4();
    fish5();
    glFlush();
}

//Updating the position of the fishes to move them so they don't hit the walls
void update(int value)
{

    fish1_move+=1.0f;
    if(fish1_move>300 && fish1_flag!=0)
    {
        fish1_move-=300;
        fish1_flag = 0;
    }
    else if(fish1_move>300 && fish1_flag==0)
    {
        fish1_move-=300;
        fish1_flag = 1;
    }

    glutPostRedisplay();
    //Tell GLUT that the display has changed

    glutTimerFunc(50, update, 0);
    //Tell GLUT to call update again in 25 milliseconds
}

//Main function
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Aquarium");
    init2D(1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);
    glutMainLoop();
}
