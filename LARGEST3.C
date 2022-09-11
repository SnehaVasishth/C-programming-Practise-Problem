
#include<stdio.h>

int Largest(int a, int b, int c)
{
	int largest;
	largest = a;
	if(b > largest)
		largest = b;
	if( c > largest)
		largest = c;
	return(largest);
 }

void main()
{
	int a,b,c;
	int x,y,z,large;
	clrscr();
	printf("Enter three numbers\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Largest = %d\n", Largest(a,b, c));
	printf("\nEnter three numbers\n");
	scanf("%d%d%d", &x, &y, &z);
       large =	Largest(x, y, z);
	printf("Largest = %d",  large);
	getch();

}