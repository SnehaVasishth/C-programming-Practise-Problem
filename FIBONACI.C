#include<stdio.h>
#include<conio.h>

int RecursiveFibonaci(int);

void main()
{
	int n,FibonaciNumber;
	clrscr();
	printf("Enter a number:\n");
	scanf("%d", &n);
	FibonaciNumber = RecursiveFibonaci(n);
	printf("Fibonaci Number %d is %d\n",n, FibonaciNumber);
	getch();

}
int RecursiveFibonaci(int n)
{
	int number;
	if(n == 0)
		return 0;
	if(n ==1)
		return 1;
	return RecursiveFibonaci(n-1) + RecursiveFibonaci(n-2);

}