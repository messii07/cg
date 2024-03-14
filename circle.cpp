#include<graphics.h>
#include<conio.h>
int main(void){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(200,200,100);
	getch();
	closegraph();
	return 0;
}
