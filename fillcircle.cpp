#include<graphics.h>
#include<conio.h>
int main(void){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(RED);
	circle(150,150,50);
	floodfill(150,150,RED);
	setcolor(YELLOW);
	outtextxy(10,20,"Name :mm");
	getch();
	closegraph();
	return 0;
}
