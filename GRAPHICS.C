#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode;
   int w,h;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");
   setbkcolor(10);
   setcolor(4);
   w = getmaxx();
   h = getmaxy();

   /* draw a diagonal line */
   line(0, 0, w, h);
   line(w,0,0,h);
   line(w/2,0,w/2,h);
   line(0,h/2,w,h/2);
   //circle(w/2,h/2, 100);
   //rectangle(w/2-100,h/2-100,w/2+100,h/2+50);*/
   outtextxy(w/2,h/2, "Sneha Sharma");
   /* clean up */
   getch();
   closegraph();
}