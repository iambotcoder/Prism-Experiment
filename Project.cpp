#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void prism()
{
	 setfillstyle(9,WHITE);
	 line(280,70,140,240); // Left
	 line(280,71,140,241);
	 line(280,70,420,240); // Right
	 line(280,71,420,241);
	 line(140,240,420,240); //bottom
	 line(140,241,420,241);	
	 floodfill(290,90,WHITE);
}
void Line(int i)
{
		int j = i*1.875;
		line(100,90,100+j,90+i); //line from outside
	    line(100,91,101+j,91+i); //line from outside		
}
void VIBGYORINPRISM()
{
	int i=0;
	for(i=0;i<6;i++)
	{
		/************************************/ 
		 setcolor(4);//RED	
		 	line(250,170,321,118+i);
		/************************************/
		 setcolor(12);//Orange
		 	line(250,170,325,124+i);
		/************************************/ 	
		 setcolor(14);//Yellow 	
		 	line(250,170,325,130+i);
		 	
		/************************************/
		setcolor(3);//Green 	
		 	line(250,170,330,136+i);
		/************************************/	
		 setcolor(1);//blue 	
		
		 	line(250,170,335,140+i);
		/************************************/
		setcolor(9);//Indigo
			line(250,170,335,145+i);
		/************************************/
		 	setcolor(5);//violet
		 	line(250,170,340,150+i);
		 	delay(10);
	}
		 
}
void VIBGYOR()
{
	float j=1;
	int i=0;
	for(i=0;i<20;i++)
	{
		j = i*1.002;
		/************************************/ 
		 setcolor(4);//RED	
		 	line(295,145,425,30+j);
		/************************************/
		 setcolor(12);//Orange
		 	line(290,154,425,40+i);
		/************************************/ 	
		 setcolor(14);//Yellow
		 	line(295,152,425,60+i);
		 /************************************/
		 setcolor(3);//Green
		 	line(270,168,425,80+i);
		 /************************************/	
		 setcolor(1);//blue
		 	line(300,153,422,100+i);
		 /************************************/
		 setcolor(9);//Indigo
		 	line(300,155,422,120+j);
		 /************************************/
		 setcolor(5);//violet
		 	line(308,156,422,141+j);
		 	delay(10);
	}
		
}
int main()
{
 int gd=DETECT,gm,i;
 initgraph(&gd,&gm,(char *)"");
 prism();
 for(i=0;i<=80;i++)
 {
 	Line(i);//Slant Line 
 	prism();
 	delay(10);
 	cleardevice();
 }
 	Line(80);
 	 prism();
 	 VIBGYOR();//outer rainbow
 	 VIBGYORINPRISM();//Inner Rainbow
 getch();
 closegraph();
 return 0;
}

