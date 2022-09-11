#include<stdio.h>

int Large(int x, int y)
{
	int z;
	if(x > y)
		z = x;
	else
		z =y;

	//z = (x > y) ? x : y;
	return(z);
 }

void main()
{
	int a,b,c;
	int d, largest;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	d = Large(a, b);
	largest = Large(c, d);
	printf("Largest = %d", largest);
	getch();

}