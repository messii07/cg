#include<math.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
int x,y,r,c1;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(150,70,70);
circle(120,50,10);
circle(190,50,10);
line(155,60,155,80);
arc(155,100,180,360,20);
line(130,140,130,170);
line(170,140,170,170);
rectangle(80,170,230,260);
line(110,260,110,360);
line(205,260,205,360);
line(80,190,55,240);
line(230,190,255,240);
getch();
closegraph();
return 0;
}
