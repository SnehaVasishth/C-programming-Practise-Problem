#include<stdio.h>
void swapv( int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("\nInside swap a = %d and b = %d\n", a,b);
}

void main()
{
	int x,y;
	printf("Enter values of x and y\n");
	scanf("%d%d", &x,&y);
	printf("Before swap:in main program x=%d and y =%d", x,y);
	swapv(x,y);
	printf("After swap:in main program x=%d and y =%d", x,y);
	getch();

}