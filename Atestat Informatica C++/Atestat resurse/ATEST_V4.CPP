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
void aplicatiigifover();
void btnf();
void formeopt();
void cautareparte();
void quiztemp();
void btnt();
void bibliografie();
int clickdateautor();
void citirea(char nume[20]);
void cautemp();
void ncap();
void quizop();
int cdn_meniu();
void cdp();
void cdn();
void cdnr();
void ntru();
void nsup();
void ntoate();
void infos();
void infmus();
void infnerv();
void mcap();
void mtru();
void msup();
void quiz();
void cautare(char fis[15]);
void cautarenr(char fis[15]);
void cautareparte(char fis[15]);
void meniu();
void forme();
void formesub();
void formedomn();
void formeomn();
void initializare();
void intro();
void meniu();
void osup();
void otoate();
void otru();
void ocap();
void aplicatii();
void date();
void informatii();
void osos();
void muscular();
void nervos();
void main()
{ initializare();
  intro();
  meniu();
}

void initializare()
{ int gdriver = DETECT, gmode, errorcode;
  initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi");
  int86(0x33,&i,&o);
}

void intro()
{ cleardevice();
	  setcolor(15);
	  settextstyle(10,0,4);
	  outtextxy(100,40,"Corpul uman");
	  setcolor(15);
	  settextstyle(3,0,5);
	  outtextxy(110,140, "Autori:");
	  settextstyle(3,0,3);
	  outtextxy(180,260,"Dudas Marius");
	  outtextxy(360,260,"si");
	  outtextxy(410,260,"Corbei Octavian");
	  setcolor(WHITE);
          getch();
  cleardevice();
}


void meniu()
{ cleardevice();
  int x,y,but;
  mut_mouse(180,250);
  arata_mouse();
  forme();
  do {
	  coord_mouse(x,y,but);
	  settextstyle(6,0,4);
	  outtextxy(190,0,"    Corpul uman ");
	  settextstyle(6,0,2);
	  outtextxy(235,95, " Informatii folositoare");
	  outtextxy(235,135,"    Sistemul osos");
	  outtextxy(235,175,"  Sistemul muscular");
	  outtextxy(235,215,"   Sistemul nervos");
	  outtextxy(235,260,"        Aplicatii");
	  outtextxy(235,300,"      Bibliografie");
	  outtextxy(235,340,"  Date despre autori");
	  outtextxy(235,380,"         Iesire ");
	  if(click(225,95,430,125)==1){ascund_mouse();
				      informatii();
				      }
	 if(click(225,135,430,165)==1){ascund_mouse();
				      osos();
				      }
	 if(click(225,175,430,205)==1){ascund_mouse();
				      muscular();
				      }
	 if(click(225,215,430,245)==1){ascund_mouse();
				      nervos();
				      }
	 if(click(225,260,430,290)==1){ascund_mouse();
				      aplicatii();
				      }
	 if(click(225,300,430,330)==1){ascund_mouse();
				      bibliografie();
				      }
	 if(click(225,340,430,370)==1){ascund_mouse();
				      date();
				      }				  
	 if(click(225,380,430,410)==1){ascund_mouse();
				      cleardevice();
				      setcolor(RED);
				      circle(320, 240, 210);
				      circle(320, 240, 200);
				      settextstyle(1,0,0);
				      outtextxy(268,220,"Sfarsit");
				      delay(1111);
				      exit(1);
				      }
       }   // end do
       while (!click(225,300,305,330));
} // end menu



void osos()
   {  cleardevice();
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formeomn();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,15,"Sistemul osos");
	     outtextxy(235,95, "   Oasele capului");
	     outtextxy(235,135," Oasele trunchiului");
	     outtextxy(235,175," Oasele mambrelor");
	     outtextxy(235,215,"   Toate oasele");
		 outtextxy(235,255,"  Inapoi la Meniu");

	     if(click(225,95,407,125)==1){ascund_mouse();
				    ocap();
				    }
	     if(click(225,135,407,165)==1){ascund_mouse();
				    otru();
				    }
	     if(click(225,175,407,205)==1){ascund_mouse();
				    osup();
				      }
	     if(click(225,215,407,245)==1){ascund_mouse();
				    otoate();
				      }
	     if(click(225,255,407,285)==1){ascund_mouse();
					meniu();
					}
       }   // end do
       while (!click(225,255,385,285));
} // end menu
void muscular()
   {  cleardevice();
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formesub();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,15,"Sistemul muscular");
	     outtextxy(235,95, "  Muschii capului");
	     outtextxy(235,135," Muschii trunchiului");
	     outtextxy(235,175," Muschii membrelor");
	     outtextxy(235,215,"  Inapoi la Meniu");

	     if(click(225,95,415,125)==1){ascund_mouse();
				    mcap();
				    }
	     if(click(225,135,415,165)==1){ascund_mouse();
				     mtru();
				    }
	     if(click(225,175,415,205)==1){ascund_mouse();
				      msup();
				      }
	     if(click(225,215,415,247)==1){ascund_mouse();
					   meniu();
					}
       }   // end do
       while (!click(225,215,415,247));
} // end menu
void nervos()
   {  cleardevice();
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
	  formesub();
	  bar(225,255,415,285);
      do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,15," Sistemul nervos");
	     outtextxy(235,95, "   Nervii capului");
	     outtextxy(235,135,"  Nervii trunchiului");
	     outtextxy(235,175,"  Nervii membrelor");
	     outtextxy(235,215,"      Toti nervii");
		 outtextxy(235,255,"   Inapoi la Meniu");

	     if(click(225,95,415,125)==1){ascund_mouse();
				      ncap();
				    }
	     if(click(225,135,415,165)==1){ascund_mouse();
				      ntru();
				    }
	     if(click(225,175,415,205)==1){ascund_mouse();
				      nsup();
				      }
		 if(click(225,215,415,247)==1){ascund_mouse();
				      ntoate();
				      }
	     if(click(225,255,415,285)==1){ascund_mouse();
					   meniu();
					}
       }   // end do
       while (!click(225,255,415,285));
} // end menu
void aplicatii()
   {  cleardevice();
       bmp16("bmp1.bmp",260,260);
       delay(1);
       bmp16("bmp2.bmp",260,260);
       delay(1);
       bmp16("bmp3.bmp",260,260);
       delay(1);
       bmp16("bmp4.bmp",260,260);
       delay(1);
       bmp16("bmp5.bmp",260,260);
       delay(1);
       bmp16("bmp6.bmp",260,260);
       delay(1);
       bmp16("bmp7.bmp",260,260);
       delay(1);
       bmp16("bmp8.bmp",260,260);
       delay(1);
       bmp16("bmp1.bmp",260,260);
       delay(1);
       bmp16("bmp2.bmp",260,260);
       delay(1);
       bmp16("bmp3.bmp",260,260);
       delay(1);
       bmp16("bmp4.bmp",260,260);
       delay(1);
       bmp16("bmp5.bmp",260,260);
       delay(1);
       bmp16("bmp6.bmp",260,260);
       delay(1);
       bmp16("bmp7.bmp",260,260);
       delay(1);
       bmp16("bmp8.bmp",260,260);
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formeopt();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,5, "Aplicatii");
	     outtextxy(235,95, "      Cautare");
	     outtextxy(235,135,"        QUIZ");
	     outtextxy(235,175,"   Inapoi la meniu");


	     if(click(225,95,415,125)==1){ascund_mouse();
				    cdn();
				    }
	     if(click(225,135,415,165)==1){ascund_mouse();
				    quizop();
				    }
	     if(click(225,175,415,205)==1){ascund_mouse();
				     meniu();
				      }

     }   // end do

     while (!click(225,175,415,205));

} // end menu
void informatii()
   {  cleardevice();
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formedomn();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,15, "Informatii folositoare");
	     outtextxy(235,95, "   Sistemul osos");
	     outtextxy(235,135," Sistemul muscular");
	     outtextxy(235,175,"  Sistemul nervos");
	     outtextxy(235,215,"  Inapoi la meniu");


	     if(click(225,95,420,125)==1){ascund_mouse();
				    infos();
				    }
	     if(click(225,135,420,165)==1){ascund_mouse();
				     infmus();
				    }
	     if(click(225,175,420,205)==1){ascund_mouse();
				     infnerv();
				      }
	     if(click(225,215,420,245)==1){ascund_mouse();
					 meniu();
					}
	     }   // end do
     while (!click(225,215,420,245));
} // end menu
void otoate()
	{ settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	  outtextxy(170,5,"Toate oasele");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("oase.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	  {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(230,55,"Parte corp");
	  outtextxy(340,55,"Exemplare");
	  outtextxy(465,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(250,70+15*j,parte);
	  outtextxy(370,70+15*j,exemp);
	  outtextxy(460,70+15*j,forma);
	  line(40, 395, 600, 395);
	if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       osos();

	}
void osup()
	{
	  settextstyle(2,0,4);
	  cleardevice();
	  settextstyle(3,0,3);
	  outtextxy(170,5,"Oasele memberlor");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("omembre.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	  {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(215,55,"Parte corp");
	  outtextxy(340,55,"Exemplare");
	  outtextxy(465,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(240,70+15*j,parte);
	  outtextxy(370,70+15*j,exemp);
	  outtextxy(460,70+15*j,forma);
	  line(40, 395, 600, 395);
	  if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       osos();

	}
void otru()
	{
	  settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	  outtextxy(170,5,"Oasele trunchiului");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("otrunchi.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	  {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(215,55,"Parte corp");
	  outtextxy(340,55,"Exemplare");
	  outtextxy(465,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(235,70+15*j,parte);
	  outtextxy(370,70+15*j,exemp);
	  outtextxy(460,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       osos();

	}
void ocap()
	{ settextstyle(2,0,4);
	  cleardevice();
	  btnf();
	  settextstyle(3,0,3);
	  outtextxy(170,5,"Oasele capului");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("ocap.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(215,55,"Parte corp");
	  outtextxy(340,55,"Exemplare");
	  outtextxy(465,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(250,70+15*j,parte);
	  outtextxy(370,70+15*j,exemp);
	  outtextxy(460,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       osos();

	}
int cdn_meniu()
   {  cleardevice();
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formedomn();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,5, "      Cautare ");
	     outtextxy(235,95, "        Oase");
	     outtextxy(235,135,"       Muschi");
	     outtextxy(235,175,"        Nervi");
	     outtextxy(235,215,"   Inapoi la Meniu");


	     if(click(225,95,420,125)==1){	ascund_mouse();
										return 1;
									}
	     if(click(225,135,420,165)==1){	ascund_mouse();
										return 2;
										}
	     if(click(225,175,420,205)==1){	ascund_mouse();
										return 3;
									  }
	     if(click(225,215,420,245)==1){ascund_mouse();
					 aplicatiigifover();
					 return 0;
					}
	     }   // end do
     while (!click(225,215,420,245));
} // end menu


void cdn()
{   cleardevice();
    int nr;
    int x,y,but;
    btnt();
    mut_mouse(20,40);
    arata_mouse();
    nr=cdn_meniu();
    char fis1[]={"oase.txt"};
    char fis2[]={"muschi.txt"};
    char fis3[]={"nervi.txt"};
    cleardevice();
    cautemp();
    settextstyle(6,0,2);
    outtextxy(380,15,"Cautare");
    setcolor(BLACK);
    settextstyle(0,0,0);
    outtextxy(100,200,"              Selectati un mod de cautare");
    outtextxy(100,240,"    facand click pe unul din tab-urile de mai sus");
    settextstyle(2,0,4);
    setcolor(WHITE);
    btnt();
    if(nr==1)do{coord_mouse(x,y,but);
	     if(click(80,85,220,110)==1){ setfillstyle(0,BLACK);
					  bar(82,32,218,58);
					  bar(235,405,260,420);
					  setcolor(BLACK);

					  cautare(fis1);

					     }
	       if(click(224,85,380,110)==1){    setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautarenr(fis1);
					     }
		 if(click(384,85,550,110)==1){  setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautareparte(fis1);
					     }
	 }
    while(!click(235,405,260,420));

    if(nr==2) do{coord_mouse(x,y,but);
	     if(click(80,85,220,110)==1){ setfillstyle(0,BLACK);
					  bar(82,32,218,58);
					  bar(235,405,260,420);

					  cautare(fis2);

					     }
	       if(click(224,85,380,110)==1){    setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautarenr(fis2);
					     }
		 if(click(384,85,550,110)==1){  setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautareparte(fis2);
					     }
	 }
    while(!click(235,405,260,420));

    if(nr==3) do{coord_mouse(x,y,but);
	     if(click(80,85,220,110)==1){ setfillstyle(0,BLACK);
					  bar(82,32,218,58);
					  bar(235,405,260,420);

					  cautare(fis3);

					     }
	       if(click(224,85,380,110)==1){    setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautarenr(fis3);
					     }
		 if(click(384,85,550,110)==1){  setfillstyle(0,BLACK);
						bar(82,32,218,58);
						bar(235,405,260,420);

						cautareparte(fis3);
					     }
	 }
    while(!click(235,405,260,420));


cdn();
}




void quizop()
	{ cleardevice();
	  settextstyle(2,0,4);
	  outtextxy(220,5,"QUIZ");
	  quiz();
	  aplicatii();
	}
int clickdateautor()
	{  cleardevice();
	   outtextxy(190,5,"Date despre autori");
	   int x,y,but;
	   btnt();
	   setfillstyle(9,9);
	   bar(100,200,250,240);
	   bar(350,200,500,240);
	   outtextxy(110,200,"Dudas Marius");
	   outtextxy(360,200,"Corbei Octavian");
	   arata_mouse();
	  do{coord_mouse(x,y,but);
	     if(click(100,200,250,240)==1){ascund_mouse();

					    return 1;
					   }
	    if(click(350,200,500,240)==1){ascund_mouse();

					   return 2;
					 }
	      if(click(235,405,260,420)==1){ascund_mouse();
					     meniu();
					     return 0;
					     }
	     }
	     while(!click(235,405,260,420));
	     ascund_mouse();
	     meniu();
}
void date()
{cleardevice();
 int x,y,but,c;
 c=clickdateautor();
 mut_mouse(320,240);
 arata_mouse();
 char nfis1[]={"dudas.txt"};
 char nfis2[]={"oti.txt"};
  if(c==1){ ascund_mouse();
	   cleardevice();
	   arata_mouse();
	   citirea(nfis1);
	   }
  if(c==2){ ascund_mouse();
	   cleardevice();
  	   arata_mouse();
  	   citirea(nfis2);
  	   }
  btnt();
  do{coord_mouse(x,y,but);
	   if(click(235,405,260,420)==1){ascund_mouse();
					  meniu();
					  }
	     }
	     while(!click(235,405,260,420));
	     ascund_mouse();
  meniu();

}
void forme()
   {  setfillstyle(1,4);
      bar(225,95,430,125);
      bar(225,135,430,165);
      bar(225,175,430,205);
      bar(225,215,430,245);
      bar(225,260,430,290);
      bar(225,300,430,330);
      bar(225,340,430,370);
      bar(225,380,430,410);
   }

void btnt()
{int a,b,but,poly[]={235,412, 245,405, 245,410, 245,410, 260,410,260,415,245,415,245,420,235,412 };
 setfillstyle(1,RED);
 fillpoly(9,poly);
 mut_mouse(320,240) ;
 arata_mouse();
}
void formesub()
{        setfillstyle(1,4);
	     bar(225,95,415,125);
	     bar(225,135,415,165);
	     bar(225,175,415,205);
	     bar(225,215,415,247);

	     }
void formeopt()
{        setfillstyle(1,4);
	     bar(225,95,415,125);
	     bar(225,135,415,165);
	     bar(225,175,415,205);

	     }
void formeomn()
{        setfillstyle(1,4);
		 bar(225,95,407,125);
	     bar(225,135,407,165);
	     bar(225,175,407,205);
	     bar(225,215,407,245);
		 bar(225,255,407,285);
	     }
void formedomn()
{        setfillstyle(1,4);
	     bar(225,95,420,125);
	     bar(225,135,420,165);
	     bar(225,175,420,205);
	     bar(225,215,420,245);

	     }
void cautare(char fis[15])
{
cautemp();
setfillstyle(0,0);
bar(450,1,640,80);
settextstyle(6,0,2);
outtextxy(380,15, "Cautare dupa nume");
setfillstyle(1,LIGHTRED);
bar(80,85,220,110);
settextstyle(0,0,0);
outtextxy(110,90,"Dupa nume");
 settextstyle(2,0,4);
 int n=1,l,lit,i,k=0,y=1,m=0,a,b,but,g=0;
 char caut[20];
 char nume[500], parte[500], exemplare[500], forma[500];
 setcolor(15);
 fstream f(fis,ios::in);
   do{lit=getch();
   caut[m]=lit;
   m++;
   caut[m]=NULL;
   outtextxy(90,37,caut);
    }
while(lit!=char(13));
caut[m-1]=NULL;
l=strlen(caut);

   setcolor(0);

do{n++;
   f>>nume>>parte>>exemplare>>forma;
    for(i=0;i<l;i++)if(nume[i]==caut[i])k++;
    if(k==l){y++;g=1;setcolor(BLACK);
		outtextxy(83,100+15*y,nume);
		outtextxy(270,100+15*y,parte);
		outtextxy(350,100+15*y,exemplare);
		outtextxy(420,100+15*y,forma);
   if(y%19==0){getch();
	     cautemp();
	     setfillstyle(1,LIGHTRED);
	     bar(80,85,220,110);
	     settextstyle(0,0,0);
	     outtextxy(110,90,"Dupa nume");
	     settextstyle(2,0,4);
	     y=1;
	     setfillstyle(1,BLACK);
	     bar(235,405,260,420);
	    }
    }
    k=0;
   }
while(!f.eof());
setcolor(WHITE);
btnt();
if(g==0) {setcolor(BLACK);
	  outtextxy(150,150,"Nu am gasit oase/muschi/nervi care au numele "); outtextxy(430,150,caut);}
	  setcolor(15);
	 }
void cautarenr(char fis[15])
{cautemp();
setfillstyle(0,0);
bar(450,1,640,80);
settextstyle(6,0,2);
outtextxy(380,15, "Cautare dupa exemplare");
setfillstyle(1,LIGHTRED);
bar(224,85,380,110);
settextstyle(0,0,0);
outtextxy(226,90,"Dupa exemplare");
 settextstyle(2,0,4);
 int n=1,l,lit,i,y=1,m=0,a,b,but,g=0;
 char nume[500], parte[500], exemplare[500], forma[500];
 char caut[20];
 setcolor(15);
 fstream f(fis,ios::in);
   do{lit=getch();
   caut[m]=lit;
   m++;
   caut[m]=NULL;
   outtextxy(90,37,caut);
    }
while(lit!=char(13));
caut[m-1]=NULL;
setcolor(0);
do{n++;
   f>>nume>>parte>>exemplare>>forma;
   if(strcmp(exemplare,caut)==0)
    {y++;g=1;setcolor(BLACK);
  outtextxy(83,100+15*y,nume);
  outtextxy(270,100+15*y,parte);
  outtextxy(350,100+15*y,exemplare);
  outtextxy(420,100+15*y,forma);
  if(y%19==0){ y=1;getch();
		cautemp();
		setfillstyle(1,LIGHTRED);
		bar(224,85,380,110);
		settextstyle(0,0,0);
		outtextxy(226,90,"Dupa exemplare");
		settextstyle(2,0,4);
		y=1;
		setfillstyle(1,BLACK);
		bar(235,405,260,420);
		}
    }

   }
while(!f.eof());
setcolor(WHITE);
btnt();
if(g==0) {setcolor(BLACK);
	  outtextxy(150,150,"Nu am gasit oase/muschi/nervi cu exemplare: "); outtextxy(400,150,caut);}
	  setcolor(15);
	 }
void cautareparte(char fis[15])
{cautemp();
setfillstyle(0,0);
bar(450,1,640,80);
settextstyle(6,0,2);
outtextxy(380,15, "Cautare dupa localizare");
setfillstyle(1,LIGHTRED);
bar(384,85,550,110);
settextstyle(0,0,0);
outtextxy(390,90,"Dupa parte corp");
 settextstyle(2,0,4);
 int n=1,l,lit,i,k=0,y=1,m=0,a,b,but,g=0;
 char caut[20];
 char nume[500], parte[500], exemplare[500], forma[500];
 setcolor(15);
 fstream f(fis,ios::in);
   do{lit=getch();
   caut[m]=lit;
   m++;
   caut[m]=NULL;
   outtextxy(90,37,caut);
    }
while(lit!=char(13));
caut[m-1]=NULL;
l=strlen(caut);

   setcolor(0);
do{n++;
   f>>nume>>parte>>exemplare>>forma;
    for(i=0;i<l;i++)if(parte[i]==caut[i])k++;
    if(k==l){y++;g=1;        setcolor(BLACK);
		outtextxy(83,100+15*y,nume);
		outtextxy(270,100+15*y,parte);
		outtextxy(350,100+15*y,exemplare);
		outtextxy(420,100+15*y,forma);
   if(y%19==0){getch();
	      cautemp();
	      setfillstyle(1,LIGHTRED);
	      bar(384,85,550,110);
	      settextstyle(0,0,0);
	      outtextxy(390,90,"Dupa parte corp");
	      settextstyle(2,0,4);
	      y=1;
	      setfillstyle(1,BLACK);
	      bar(235,405,260,420);
	     }
    }
    k=0;
   }
while(!f.eof());
setcolor(WHITE);
btnt();
if(g==0) {setcolor(BLACK);
outtextxy(150,150,"Nu am gasit oase/muschi/nervi din "); outtextxy(430,150,caut);}
setcolor(15);
}
void quiz()
{ cleardevice();
  char rasp[3],lit,contor[4],elev[20];
	  int i,corect=0,k=0,gg;
	  fstream o("rezult.txt",ios::app);
	  fstream f("quiz3.txt",ios::in);
	  settextstyle(3,0,3);
	  outtextxy(240,5,"QUIZ");
	  settextstyle(2,0,5);
	  outtextxy(100,100,"Numele tau este:");
	  do { lit=getch();
	       elev[k]=lit;
	       k++;
	       elev[k]=NULL;
	       outtextxy(220,100,elev);
	     }
	 while(lit!=char(13));
	 elev[k-1]=NULL;
	  cleardevice();
	  outtextxy(100,170,"ATENTIE! Programul nu va trece la urmatoarea intrebare");
	  outtextxy(100,220,"     decat atunci cand veti gasi raspunsul corect");
	  delay(3500);
	  cleardevice();
	      quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"1."); outtextxy(150,120,"De cate ori se gaseste osul frontal in corpul uman ?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Odata");
		outtextxy(330,227,"B"); outtextxy(362,225,"Nu exista");
		outtextxy(100,287,"C"); outtextxy(132,285,"De 2 ori");
		outtextxy(330,287,"D"); outtextxy(362,285,"De 15 ori");
	       int x,y,but;
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Nu exista");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Nu exista");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"De 2 ori");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"De 2 ori");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"De 15 ori");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"De 15 ori");
				     delay(1000);
				     }


	      }
	    while(!click(120,220,300,260));

	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,220,300,260);
	    setcolor(WHITE);
	    outtextxy(132,225,"Odata");
	    delay(1000);
	    cleardevice();
	      quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
		setcolor(WHITE);
		outtextxy(100,120,"2."); outtextxy(150,120,"Care dintre urmatoarele face parte din picior ?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Femur");
		outtextxy(330,227,"B"); outtextxy(362,225,"Miocard");
		outtextxy(100,287,"C"); outtextxy(132,285,"Osul stern");
		outtextxy(330,287,"D"); outtextxy(362,285,"Biceps");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Miocard");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Miocard");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"Osul stern");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"Osul stern");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Biceps");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Biceps");
				     delay(1000);
				     }


	      }
	    while(!click(120,220,300,260));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,220,300,260);
	    setcolor(WHITE);
	    outtextxy(132,225,"Femur");
	    delay(1000);
	    cleardevice();
	      quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
	      outtextxy(100,120,"3."); outtextxy(150,120,"Muschiul miocard este situat la?");
	      setcolor(BLACK);
	      outtextxy(100,227,"A"); outtextxy(132,225,"Ochi");
	      outtextxy(330,227,"B"); outtextxy(362,225,"Inima");
	      outtextxy(100,287,"C"); outtextxy(132,285,"Picior");
	      outtextxy(330,287,"D"); outtextxy(362,285,"Glezne");
	       mut_mouse(320,240);
	       arata_mouse();
		do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"Ochi");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"Ochi");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"Picior");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"Picior");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Glezne");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Glezne");
				     delay(1000);
				     }


	      }
	    while(!click(350,220,530,260));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(350,220,530,260);
	    setcolor(WHITE);
	    outtextxy(362,225,"Inima");
	    delay(1000);
	    cleardevice();
	       quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"4."); outtextxy(150,120,"Care este cel mai lung os?");
	      setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Stern");
		outtextxy(330,227,"B"); outtextxy(362,225,"Tibia");
		outtextxy(100,287,"C"); outtextxy(132,285,"Femur");
		outtextxy(330,287,"D"); outtextxy(362,285,"Rotula");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"Stern");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"Stern");
				     delay(1000);
				     }
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Tibia");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Tibia");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Rotula");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Rotula");
				     delay(1000);
				     }


	      }
	    while(!click(120,280,300,320));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,280,300,320);
	    setcolor(WHITE);
	    outtextxy(132,285,"Femur");
	    delay(1000);
	    cleardevice();
	       quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"5."); outtextxy(150,120,"Elementele principale ale sistemului nervos sunt?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Celule gliale si neuroni");
		outtextxy(330,227,"B"); outtextxy(362,225,"Creierul mic si cel mare");
		outtextxy(100,287,"C"); outtextxy(132,285,"Encefal si diencefal");
		outtextxy(330,287,"D"); outtextxy(362,285,"Nervii optici");
	       setcolor(BLACK);
	       outtextxy(288,384," Raspuns");
	       rasp[0]=lit; rasp[1]=NULL;
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Creierul mic si cel mare");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Creierul mic si cel mare");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"Encefal si diencefal");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"Encefal si diencefal");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Nervii optici");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Nervii optici");
				     delay(1000);
				     }


	      }
	    while(!click(120,220,300,260));

	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,220,300,260);
	    setcolor(WHITE);
	    outtextxy(132,225,"Celule gliale si neuroni");
	    delay(1000);
	    cleardevice();
	       quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"6."); outtextxy(150,120,"Muschiul sternocleidomastoidian este un muschi al?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Pieptului");
		outtextxy(330,227,"B"); outtextxy(362,225,"Gatului");
		outtextxy(100,287,"C"); outtextxy(132,285,"Piciorului");
		outtextxy(330,287,"D"); outtextxy(362,285,"Capului");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"Pieptului");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"Pieptului");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"Piciorului");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"Piciorului");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Capului");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Capului");
				     delay(1000);
				     }


	      }
	    while(!click(350,220,530,260));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(350,220,530,260);
	    setcolor(WHITE);
	    outtextxy(362,225,"Gatului");
	    delay(1000);
	    cleardevice();
		quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"7."); outtextxy(150,120,"Tesutul nervos este format din?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Nervi sceptici");
		outtextxy(330,227,"B"); outtextxy(362,225,"Sistemul nervos central");
		outtextxy(100,287,"C"); outtextxy(132,285,"Neuroni");
		outtextxy(330,287,"D"); outtextxy(362,285,"Sistemul nervos vegetativ");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"Nervi sceptici");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"Nervi sceptici");
				     delay(1000);
				     }
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Sistemul nervos central");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Sistemul nervos central");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Sistemul nervos vegetativ");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Sistemul nervos vegetativ");
				     delay(1000);
				     }


	      }
	    while(!click(120,280,300,320));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,280,300,320);
	    setcolor(WHITE);
	    outtextxy(132,285,"Neuroni");
	    delay(1000);
	    cleardevice();
	      quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"8."); outtextxy(150,120,"Cate coaste are coloana vertebrala?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"11");
		outtextxy(330,227,"B"); outtextxy(362,225,"34");
		outtextxy(100,287,"C"); outtextxy(132,285,"12");
		outtextxy(330,287,"D"); outtextxy(362,285,"24");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"11");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"11");
				     delay(1000);
				     }
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"34");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"34");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"12");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"12");
				     delay(1000);
				     }


	      }
	    while(!click(350,280,530,320));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(350,280,530,320);
	    setcolor(WHITE);
	    outtextxy(362,285,"24");
	    delay(1000);
	    cleardevice();
	       quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"9."); outtextxy(150,120,"Sistemul nervos periferic este format din?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"Somatic si vegetativ");
		outtextxy(330,227,"B"); outtextxy(362,225,"Simpatic si parasimpatic");
		outtextxy(100,287,"C"); outtextxy(132,285,"Autonom si simpatic");
		outtextxy(330,287,"D"); outtextxy(362,285,"Somatic si simpatic");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(350,220,530,260)==1){ setfillstyle(1,RED);
				     bar(350,220,530,260);
				     setcolor(WHITE);
				     outtextxy(362,225,"Simpatic si parasimpatic");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,220,530,260);
				     setcolor(RED);
				     outtextxy(362,225,"Simpatic si parasimpatic");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"Autonom si simpatic");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"Autonom si simpatic");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"Somatic si simpatic");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"Somatic si simpatic");
				     delay(1000);
				     }


	      }
	    while(!click(120,220,300,260));

	    corect++;
	    setfillstyle(1,GREEN);
	    bar(120,220,300,260);
	    setcolor(WHITE);
	    outtextxy(132,225,"Somatic si vegetativ");
	    delay(1000);
	    cleardevice();
	      quiztemp();
	      settextstyle(3,0,3);
	      outtextxy(240,5,"QUIZ");
	      settextstyle(2,0,5);
	      setcolor(WHITE);
		outtextxy(100,120,"10."); outtextxy(150,120,"Din cate oase este alcatuit sistemul osos?");
		setcolor(BLACK);
		outtextxy(100,227,"A"); outtextxy(132,225,"120");
		outtextxy(330,227,"B"); outtextxy(362,225,"206");
		outtextxy(100,287,"C"); outtextxy(132,285,"260");
		outtextxy(330,287,"D"); outtextxy(362,285,"102");
	       mut_mouse(320,240);
	       arata_mouse();
	       do{coord_mouse(x,y,but);
		  if(click(120,220,300,260)==1){ setfillstyle(1,RED);
				     bar(120,220,300,260);
				     setcolor(WHITE);
				     outtextxy(132,225,"120");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,220,300,260);
				     setcolor(RED);
				     outtextxy(132,225,"120");
				     delay(1000);
				     }
		  if(click(120,280,300,320)==1){ setfillstyle(1,RED);
				     bar(120,280,300,320);
				     setcolor(WHITE);
				     outtextxy(132,285,"260");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(120,280,300,320);
				     setcolor(RED);
				     outtextxy(132,285,"260");
				     delay(1000);
				     }
		  if(click(350,280,530,320)==1){ setfillstyle(1,RED);
				     bar(350,280,530,320);
				     setcolor(WHITE);
				     outtextxy(362,285,"102");
				     delay(1000);
				     setfillstyle(1,WHITE);
				     bar(350,280,530,320);
				     setcolor(RED);
				     outtextxy(362,285,"102");
				     delay(1000);
				     }


	      }
	    while(!click(350,220,530,260));
	    corect++;
	    setfillstyle(1,GREEN);
	    bar(350,220,530,260);
	    setcolor(WHITE);
	    outtextxy(362,225,"206");
	    delay(1000);
	    cleardevice();

	  o<<elev<<" are punctaj obtinut="<<corect<<endl;
	  o.close();
	  setcolor(WHITE);
	  outtextxy(70,120,"Accesati fisierul REZULT.txt , pentru a vedea punctajul");
	  delay(3000);
          aplicatiigifover();
	}

void msup()
	{ settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	  outtextxy(170,5,"Muschii membrelor");
	  int i,j=1;
	 char nume[550],parte[550],legaturi[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("mmembre.txt",ios::in);
      do{f>>nume>>legaturi>>forma>>parte;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(230,55,"Legaturi");
	  outtextxy(360,55,"Forma");
	  outtextxy(530,55,"Parte");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(250,70+15*j,legaturi);
	  outtextxy(360,70+15*j,forma);
	  outtextxy(540,70+15*j,parte);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       muscular();
       }

void mtru()
	{ settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	  outtextxy(170,5,"Muschii trunchiului");
	  int i,j=1;
	 char nume[550],parte[550],legaturi[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("mtrunchi.txt",ios::in);
      do{f>>nume>>legaturi>>forma>>parte;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(230,55,"Legaturi");
	  outtextxy(360,55,"Forma");
	  outtextxy(530,55,"Parte");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(250,70+15*j,legaturi);
	  outtextxy(360,70+15*j,forma);
	  outtextxy(540,70+15*j,parte);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       muscular();
       }
void mcap()
	{ settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	  outtextxy(170,5,"Muschii capului");
	  int i,j=1;
	 char nume[550],parte[550],legaturi[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("mcap.txt",ios::in);
      do{f>>nume>>legaturi>>forma>>parte;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(230,55,"Legaturi");
	  outtextxy(360,55,"Forma");
	  outtextxy(530,55,"Parte");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(250,70+15*j,legaturi);
	  outtextxy(360,70+15*j,forma);
	  outtextxy(540,70+15*j,parte);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       muscular();
       }

void infos()
	{  cleardevice();
	   char nume[]={"infos.txt"};
	   int x,y,but;
	   mut_mouse(20,40);
	   arata_mouse();
	   outtextxy(280,15,"Oasele corpului uman");
	   citirea(nume);
	   bmp16("schos.bmp",420,70);
	   btnt();
	    do{coord_mouse(x,y,but);
 if(click(510, 70, 545, 115)==1){
	   setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("oasecap.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
	   }
 if(click(495,115,550,220)==1){
	   setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("trunchi.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
	   }//trunchi

 if(click(495,220,513,360)==1){//picior stang
	   setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("picioare.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());//piciorstang
	   btnt();
					}
 if(click(530,220,546,375)==1){ //picior drept
	   setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("picioare.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}

 if(click(465,130,488,180)==1){//stanga sus brat
	   setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}
 if(click(435,170,465,210)==1){//stanga jos brat
 setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}
 if(click(420,210,442,235)==1){//stanga degete brat
  setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}
  if(click(555,130,580,170)==1){//dreapta sus brat
    setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}
 if(click(570,170,598,220)==1){//dreapta jos brat
     setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}
 if(click(585,220,612,250)==1){//dreapta degete brat
      setfillstyle(1,BLACK);
	   bar(50,180,400,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("brat.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Exemplare");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,400,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
					}

 if(click(235,405,260,420)==1){ascund_mouse();
					  informatii();
					  }
	     }
	     while(!click(235,405,260,420));
	    ascund_mouse();
	   informatii();
	}
void infmus()
	{  cleardevice();
	   char nume[]={"infmus.txt"};
	   int x,y,but;
	   mut_mouse(20,40);
	   arata_mouse();
	   outtextxy(280,15,"Muschii corpului uman");
	   citirea(nume);
	   bmp16("schmus.bmp",360,70);
	   btnt();
	   do{coord_mouse(x,y,but);

if(click(520,130,590,230)==1){//brat drept
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("musbra.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt(); }

if(click(370,130,440,230)==1){//brat stanga
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("musbra.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();  }

if(click(471, 70, 510, 115)==1){//cap
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("muscap.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
				}

if(click(459,120,520,230)==1){//trunchi
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("mustr.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
			     }

if(click(495,232,523,382)==1){ //picior drept
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("muspic.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
			     }

if(click(457,232,485,382)==1){ //picior stang
setfillstyle(1,BLACK);
	   bar(50,180,330,450);
	   int i,j=1;
	   char nume[550],exemp[505];
	   settextstyle(0, 0, 0);
	   setcolor(15);
	   fstream f("muspic.txt",ios::in);
	   do{f>>nume>>exemp;
	     {j++;
	     setcolor(LIGHTRED);
	     outtextxy(80,180,"Nume");
	     outtextxy(270,180,"Lungime(cm)");
	     setcolor(WHITE);
	     outtextxy(80,180+15*j,nume);
	     outtextxy(290,180+15*j,exemp);
		     if(j==12)	{getche();
				 setfillstyle(1,BLACK);
				 bar(50,180,330,450);
				 j=1;
				 }
	     }
	   }
	   while(!f.eof());
	   btnt();
			      }

if(click(235,405,260,420)==1){ascund_mouse();
					  informatii();
					  }
	     }
	     while(!click(235,405,260,420));
	    ascund_mouse();
	   informatii();
	}
void infnerv()
	{  cleardevice();
	   char nume[]={"infnerv.txt"};
	   int x,y,but;
	   mut_mouse(20,40);
	   arata_mouse();
	   outtextxy(280,15,"Nervii corpului uman");
	   citirea(nume);
	   bmp16("nerv.bmp",150,230);
	   btnt();
	    do{coord_mouse(x,y,but);
	   if(click(235,405,260,420)==1){ascund_mouse();
					  informatii();
					  }
	     }
	     while(!click(235,405,260,420));
	    ascund_mouse();
	 informatii();
	}


void ntoate()
	{
	  settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	 outtextxy(170,5,"Toti nervii");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("nervi.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(255,55,"Parte corp");
	  outtextxy(380,55,"Ramificatii");
	  outtextxy(505,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(290,70+15*j,parte);
	  outtextxy(410,70+15*j,exemp);
	  outtextxy(500,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       nervos();
       }

void ncap()
	{
	  settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	 outtextxy(170,5,"Toti nervii");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("ncap.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(255,55,"Parte corp");
	  outtextxy(380,55,"Ramificatii");
	  outtextxy(505,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(290,70+15*j,parte);
	  outtextxy(410,70+15*j,exemp);
	  outtextxy(500,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       nervos();
       }

void nsup()
	{
	  settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	 outtextxy(170,5,"Nervii membrelor");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("nmembre.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(255,55,"Parte corp");
	  outtextxy(380,55,"Ramificatii");
	  outtextxy(505,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(290,70+15*j,parte);
	  outtextxy(410,70+15*j,exemp);
	  outtextxy(500,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       nervos();
       }

void ntru()
	{
	  settextstyle(2,0,4);
	  cleardevice();
      settextstyle(3,0,3);
	 outtextxy(170,5,"Nervii trunchiului");
	  int i,j=1;
	 char nume[550],parte[550],exemp[505],forma[505];
	 settextstyle(0, 0, 0);
	 setcolor(15);
	 fstream f("ntrunchi.txt",ios::in);
      do{f>>nume>>parte>>exemp>>forma;
	 {j++;
	  setcolor(LIGHTRED);
	  outtextxy(63,55,"Nume");
	  outtextxy(255,55,"Parte corp");
	  outtextxy(380,55,"Ramificatii");
	  outtextxy(505,55,"Forma");
	  setcolor(WHITE);
	  line(40, 75, 600, 75);
	  outtextxy(53,70+15*j,nume);
	  outtextxy(290,70+15*j,parte);
	  outtextxy(410,70+15*j,exemp);
	  outtextxy(500,70+15*j,forma);
	  line(40, 395, 600, 395);
	 if(j==20)	{int x,y,but;
			 j=1;
			 btnf();
			 mut_mouse(320,406);
			 arata_mouse();
			  do{coord_mouse(x,y,but);
			     }
			  while(!click(380,405,405,415));
			  cleardevice();
			}
	}
	}
  while(!f.eof());
	  btnt();
	  setfillstyle(1,0);
	  bar(380,405,405,415);
	  int x,y,but;
	  mut_mouse(320,406);
	  arata_mouse();
	   do
	     {coord_mouse(x,y,but);
	     }
	   while(!click(235,405,260,420));
       ascund_mouse();
       nervos();
       }

void cautemp()
{ setcolor(BLACK);
  setfillstyle(1,RED);
  bar(80,85,220,110);
  bar(224,85,380,110);
  bar(384,85,550,110);
  setcolor(WHITE);
  settextstyle(0,0,0);
  outtextxy(110,90,"Dupa nume");
  outtextxy(226,90,"Dupa exemplare");
  outtextxy(390,90,"Dupa parte corp");
  settextstyle(2,0,4);
  setcolor(WHITE);
  rectangle(80,30,220,60);
  rectangle(230,30,260,60);
  circle(242,42,9);
  line(249,48,258,57);
  setcolor(BLACK);
  setfillstyle(1,15);
  bar(80,110,550,400);
  setcolor(0);
  line(80, 125, 570, 125);
  setcolor(RED);
  outtextxy(83,110,"Nume");
  outtextxy(265,110,"Parte");
  outtextxy(335,110,"Exemplare");
  outtextxy(440,110,"Forma");
  setcolor(WHITE);
}
void citirea(char nume[20])
{settextstyle(2,0,4);
 char rand[200];
int n=1;
  fstream f(nume,ios::in);
  do{n++;
     f.getline(rand,130,'\n');
     outtextxy(80,40+10*n,rand);
     if(n==37){n=0;

	       getche();
	       ascund_mouse();
	       setfillstyle(1,0);
	       bar(1,1,640,480);
	       arata_mouse();
	       }
     }
     while(!f.eof());
     f.close();
}
void bibliografie()
{ cleardevice();
  int x,y,but;
  btnt();
  outtextxy(265,15,"Bibliografie");
  outtextxy(75,80,"Sursele care ne-au fost de ajutor in elaborarea tezei sunt:");
  outtextxy(65,105,"-Caietul de informatica");
  outtextxy(65,130,"-Portofoliul algoritmi");
  outtextxy(65,155,"-www.wikipedia.ro");
  outtextxy(65,180,"-www.e-referate.ro");
  mut_mouse(120,120);
  arata_mouse();
  do{coord_mouse(x,y,but);
	   if(click(235,405,260,420)==1){ascund_mouse();
					  meniu();
					}
    }
   while(!click(235,405,260,420));
   ascund_mouse();
   meniu();
}


void quiztemp()
{ setfillstyle(1,RED);
  bar(1,120,640,150);
  setfillstyle(1,WHITE);
  bar(120,220,300,260);
  bar(350,220,530,260);
  bar(120,280,300,320);
  bar(350,280,530,320);
}

void btnf()
{int a,b,but,poly[]={405,412,  395,405,  395,410,  395,410,   380,410,  380,415,  395,415,  395,420,  405,412 };
 setfillstyle(1,RED);
 fillpoly(9,poly);
 mut_mouse(320,240) ;
 arata_mouse();
}
void aplicatiigifover()
   {  cleardevice();
       bmp16("bmp8.bmp",260,260);
      int x,y,but;
      mut_mouse(180,250);
      arata_mouse();
      formeopt();
	  do {  coord_mouse(x,y,but);
	     settextstyle(6,0,2);
	     outtextxy(280,5, "Aplicatii");
	     outtextxy(235,95, "      Cautare");
	     outtextxy(235,135,"        QUIZ");
	     outtextxy(235,175,"   Inapoi la meniu");


	     if(click(225,95,415,125)==1){ascund_mouse();
				    cdn();
				    }
	     if(click(225,135,415,165)==1){ascund_mouse();
				    quizop();
				    }
	     if(click(225,175,415,205)==1){ascund_mouse();
				     meniu();
				      }

     }   // end do

     while (!click(225,175,415,205));

} // end menu

