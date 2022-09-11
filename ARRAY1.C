#include<stdio.h>
#define SIZE 10

void main()
{
	int a[SIZE],i,j,n, max, min;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i<n; i++)
	{
		  printf("number is:\n");
		  scanf("%d",&a[i]);
	}
	printf("Entered numbers are\n");
	for(i=0; i<n; i++)
	{
		  printf("%d\n", a[i]);

	}
	max =a[0];
	for(i= 1; i< n; i++)
	{
		if(a[i] > max)
		  max = a[i];
	}
	printf("largest number is:%d", max);
	min = a[0];
	for(i= 1; i < n; i++)
	{
		if(a[i] < min)
		  min = a[i];
	}
	printf("\nSmallest number is: %d", min);
	getch();
}