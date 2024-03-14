#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setbkcolor(WHITE);
for(x=0;x<=420;x=x+10)
{
cleardevice();
setcolor(RED);
rectangle(50+x,275,150+x,400);
rectangle(150+x,350,200+x,400);
setcolor(5);
circle(75+x,410,10);
circle(175+x,410,10);
outtextxy(10,20,"Name: mm");
delay(100);
}
getch();
closegraph();
return 0;
}
