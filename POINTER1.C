#include<stdio.h>
void main()
{
	int a;
	int *aPtr;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d", &a);
	aPtr = &a;
	printf("The adress of a is %u \nThe value of aPtrr is %u\n\n", &a, aPtr);
	printf("The value of a is %d \nThe value of *aPtr is %d\n\n", a, *aPtr);
	printf("Showing that * and & are complement of each other"
		"\n &*aPtr = %u \n *&aPtr = %u", &*aPtr, *&aPtr);
	getch();
}