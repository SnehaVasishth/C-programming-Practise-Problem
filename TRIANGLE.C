#include <stdio.h>
#include<conio.h>
void main()

{
int a, b, c;
scanf("%d%d%d", &a, &b, &c);
if(a<b+c || b< a+c || c< a+b)
	printf("triangle is valid\n");
else
	printf("triangle is not possible\n");
getch();
}