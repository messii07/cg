#include<graphics.h>
#include<conio.h>
int main(){
	int gd= DETECT,gm;
	int poly[12]={350,450,350,410,430,400,350,350,300,430,350,450};
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(100,150,50);
	rectangle(250,100,400,200);
	ellipse(550,150,0,360,70,35);
	line(150,300,540,300);
sector(200,400,30,300,50,70);
drawpoly(6,poly);
	getch();
	closegraph;
	return 0;	
}
