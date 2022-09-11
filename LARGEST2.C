#include<stdio.h>

void Largest(int, int, int);


void main()
{
	int a,b,c,largest;
	int x,y,z;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	Largest(a, b, c);
	printf("\nEnter three numbers\n");
	scanf("%d%d%d", &x, &y, &z);
	Largest(x, y, z);
	getch();

}

void Largest(int a, int b, int c)
{
	int largest;
	largest = a;
	if(b > largest)
		largest = b;
	if( c > largest)
		largest = c;
	printf("Largest number = %d among %d, %d and %d", largest, a, b,c);
 }