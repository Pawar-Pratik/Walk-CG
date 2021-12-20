#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>

using namespace std;
int x, y;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, NULL);
    line(0,0,50,300);
    delay(10000);
    closegraph();
    return 0;
}