#include <stdio.h>
#include<conio.h>
void main()
{
int length, breadth, per, area ;
printf("enter length, breadth, per and area\n");
scanf("%d   %d", &length, &breadth);
per=2*(length+breadth);
area= length*breadth;
printf("%d   %d are perimeter and area respectively\n",per,area);
if(per>area)
	printf("per is greater than area\n");
else
		printf("area is greater than perimeter\n");
getch();
}