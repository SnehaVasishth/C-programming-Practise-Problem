#include<stdio.h>

int cubeByValue( int n);
void main()
{
	int n, cube;
	clrscr();
	printf("Enter the value ");
	scanf("%d", &n);
	printf("The origional value of number is %d\n", n);
	cube = cubeByValue(n);
	printf("The cube of %d is %d\n",n,cube);
	printf("The number after cube function is %d\n",n);

	getch();
}
int cubeByValue( int n)
{
	return (n * n *n);
	//return(n);


}