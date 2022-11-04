#include<graphics.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm,x,y,i;
    initgraph(&gd,&gm,(char*)"");
    x= getmaxx()/2;
    y=getmaxy()/2;

    circle(x,y,55);
  setfillstyle(HATCH_FILL,BROWN);
    floodfill(x,y,15);
     setbkcolor(YELLOW);
     pieslice(x,y-75,310,220,35);
    pieslice(x+75,y-40,240,180,35);
     pieslice(x+75,y+40,170,490,35);
     pieslice(x,y+75,130,410,35);
      pieslice(x-75,y+40,58,360,35);
      pieslice(x-75,y-40,0,305,35);
    setcolor(WHITE);

      line(x,y+100,x,y+150);
      setcolor(BLUE);
      line(x-70,y+150,x+75,y+150);
      line(x-70,y+150,x-45,y+225);
      line(x-45,y+225,x+45,y+225);
      line(x+45,y+225,x+75,y+150);
  setfillstyle(SOLID_FILL,BROWN);
    floodfill(x-50,y+200,BLUE);



    getch();
    closegraph();
    return 0;
}
