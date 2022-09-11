#include<stdio.h>
void swapv( int *a, int *b)
{
	int t;
	printf("\nInside swap, before swaping a =%d and b=%d", *a,*b);
	t = *a;
	*a = *b;
	*b = t;
	printf("\nInside swap, after swaping a = %d and b = %d\n", *a,*b);
}

void main()
{
	int x,y;
	clrscr();
	printf("Enter values of x and y\n");
	scanf("%d%d", &x,&y);
	printf("Before swap:in main program x=%d and y =%d", x,y);
	swapv(&x,&y);
	printf("After swap:in main program x=%d and y =%d", x,y);
	getch();

}