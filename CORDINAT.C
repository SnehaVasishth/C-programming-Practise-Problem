#include <stdio.h>
#include<conio.h>
void main()

{
int x1, y1, x2, y2, x3, y3;
float a;
printf("enter cordinates\n");
scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
a=x1 * (y2-y3)+ x2 * (y3-y1)+ x3 * (y1-y2);
a = a/2;
printf("%f is the criteria\n",a);
if(a==0)
	printf("points are collinear\n");
else
	printf("points are forming triangle\n");
getch();
}
