#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm," ");

  setcolor(RED);
  circle(200,300,80);
  setcolor(FF00FF);
  line(50,60,450,380);
  rectangle(50,80,200,250);
  getch();

  closegraph();

}