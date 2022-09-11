#include<stdio.h>

void largest()
{
	int a,b,c, largest;
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	largest = a;
	if(b > largest)
		largest = b;
	if( c > largest)
		largest = c;
	printf("Largest number = %d among %d, %d and %d", largest, a, b,c);
 }

void main()
{
	clrscr();
	largest();
	getch();

}