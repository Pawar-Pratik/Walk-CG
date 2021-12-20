//Name : Pratik Pawar

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<graphics.h>

using namespace std;

int x,y,angle=0;
void Rain(int x)
{
    int GroundY=400;
    int i,rx,ry;
    for(i=0;i<400;i++)
    {
        rx=rand() % getmaxx();
        ry=rand() % getmaxy();
        if(ry<GroundY-4)
        {
            line(rx,ry,rx+1,ry+2);
        }
    }
}
int main()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,NULL);

    for(i=0;i<getmaxx()-50;i++)
    {
        Rain(x);
        line(0,400, getmaxx(),400);         //ground line
        rectangle(50+i,250,100+i,350);      //body
        circle(75+i,225,25);                //face
        line(60+i,350,90+i,400);            //left leg
        line(90+i,350,60+i,400);            //right leg
        line(100+i,300,125+i,275);          //left hand
        line(50+i,190,200+i,190);           //umbrell arc line
        line(125+i,275,125+i,190);          //umbrella line
        arc(125+i,190,0,180,75);            //umbrell arc

        if (i%2==0)
        {
            line(75+i,275,25+i,325);        //backward moving right hand
        }
        else
        {
            line(75+i,275,125+i,325);       //forward moving right hand
        }
        delay(500);
        cleardevice();
    }
        delay(50000);
        closegraph();
    return 0;
}