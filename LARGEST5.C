#include<stdio.h>

int Large(int x, int y)
{
	int z;
	return( (x > y) ? x : y);

 }

void main()
{
	int a,b,c;
	int d, largest;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	d = Large(a, b);
	printf("Largest = %d", Large(c, d));
	getch();

}