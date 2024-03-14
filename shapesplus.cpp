#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void){
	int xmax ,ymax;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\BGI");
	xmax=getmaxx();
	ymax=getmaxy();
	
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
	
	circle(150,150,70);
	
	rectangle(50,251,304,392); 
	
	arc(450,150,0,100,70);
	
	ellipse(500,350,0,360,100,50);
	getch();
	closegraph();
	return 0;
}
