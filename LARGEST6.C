#include<stdio.h>

int Large(int x, int y)
{
	int z;
	return( (x > y) ? x : y);

 }

void main()
{
	int a,b,c, largest;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Largest = %d", Large(c, Large(a, b) ) );
	getch();

}