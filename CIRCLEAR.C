#include <stdio.h>
#include <conio.h>

void main()
{
float no_of_sides,per,a ,b, c, d, r;
//no_of_sides=0;
clrscr();
printf("Enter no_of_sides\n");
scanf("%f",&no_of_sides);
if(no_of_sides==4)
{
	printf("type length of sides/n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	per = a + b + c + d;
	printf("perimerter of quadrilateral=%f\n",per);
}
if(no_of_sides==3)
{
	printf("type lenght of sides/n");
	scanf("%f %f %f",&a,&b,&c);
	per = a + b + c;
	printf("perimerter of traiangle=%f\n",per);
}
if(no_of_sides==0)
{
	printf("enter radius\n");
	scanf("%f",&r);
	per = 2 * 3.14 * r;
	printf("perimerter of circle=%f\n",per);
}
//else(no_of_sides > 4)
  //	printf("add all sides for perimeter/n");
getch();
}

