//Name : Pratik Pawar

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int x, y, angle=0;
int main()
{
    int gd=DETECT,gm;

    initgraph(&gd, &gm, NULL);

    line(0,400, getmaxx(),400);
    rectangle(50,250,100,350);
    circle(75,225,25);
    line(60,350,90,400);
    line(90,350,60,400);
    line(75,275,125,325);
    line(50,275,15,325);
    delay(100000);
    closegraph();

    return 0;
}