#include<stdio.h>
void main()
{
int  y;    for(y = 1; y = 6;y++)
float i, x;
clrscr();
for(y = 1; y <= 3;y++)
{
  for(x = 5.5; x <= 7.5;x++)
  {
	i  = 2 + (y + 0.5 * x);
	printf("%f\t%d\t%f", i,y,x);
	printf("\n");
  }
}
getch();
}
