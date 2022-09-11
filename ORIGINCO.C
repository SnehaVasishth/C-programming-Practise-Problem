#include <stdio.h>
#include<conio.h>
void main()

{
int x1, y1;
printf("Enter Values\n");
scanf("%d%d", &x1, &y1);
if(x1==0 && y1==0)
	printf("on origin\n");
else if(y1==0)
	printf("on x axis\n");
else if(x1==0)
	printf("on y axis\n");
else
	printf("normal cordinate");
getch();
}
