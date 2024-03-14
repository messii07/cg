#include<graphics.h>
#include<conio.h>
int main(void){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	arc(200,200,0,100,120);
	outtextxy(10,29,"hm");
	getch();
	closegraph();
	return 0;
}
