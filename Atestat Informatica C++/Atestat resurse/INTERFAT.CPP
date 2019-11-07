#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<CTYPE.h>
#include<stdlib.h>
#include<bmp16.h>
#include<mouse.h>
void initializare();
void main()
{initializare();
 setfillstyle(1,RED);
 bar(50,50,70,70);
 setfillstyle(1,GREEN);
 bar(80,50,100,70);
 setfillstyle(1,BLUE);
 bar(50,80,70,100);
 setfillstyle(1,YELLOW);
 bar(80,80,100,100);
 outtextxy(40,110,"Aplicatii");
 outtextxy(180,110,"Informatii");
 outtextxy(380,360,"Date autori");
 settextstyle(1,0,7);
 outtextxy(200,30,"!");
 outtextxy(220,30,"?");
 arc(400,350,0,180,23);
 arc(440,340,-10,155,23);
 circle(400,310,12);
 circle(440,300,12);
 getche();
}
void initializare()
{ int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi");
  int86(0x33,&i,&o);
}
