#include<stdio.h>

void main()
{
	int a[8],n;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	write_array(a,n);
	read_array(a,n);
	max(a,n);
	min(a,n);
	getch();
}
void write_array( int a[10], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("a[%d] is:",i);
		scanf("%d",&a[i]);
	}
}

void read_array( int a[], int n)
{
	int i;
	printf("Entered numbers are :\n");
	for(i=0; i<n; i++)
	{
		 printf("%d\n", a[i]);
	}
}
void max( int a[], int n)
{
	int i, max;
	max =a[0];
	for(i=0; i<n; i++)
	{
		if(a[i] > max)
			max= a[i];
	}
	printf("largest number is:%d", max);
}

void min( int a[], int n)
{
	int i, min;
	min =a[0];
	for(i=0; i<n; i++)
	{
		if(a[i] < min)
			min= a[i];
	}
	printf("\nSmallest number is: %d", min);
}