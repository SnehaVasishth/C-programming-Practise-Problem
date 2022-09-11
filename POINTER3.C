#include<stdio.h>

int cubeByReference( int *nPtr);
void main()
{
	int number, cube;
	printf("Enter the value ");
	scanf("%d", &number);
	printf("The origional value of number is %d\n", number);
	cube = cubeByReference(&number);
	printf("The cube of %d is %d\n",number,cube);
	printf("The value of number after function call is %d\n", number);
	getch();
}
int cubeByReference (int *nPtr)
{
	*nPtr= *nPtr * *nPtr * *nPtr;
       return (*nPtr);

}