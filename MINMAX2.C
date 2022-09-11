#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 20

void MinMax(int a[], int );

void main()
{
	int a[MAX],n,i;
	clrscr();
	printf("\nENTER THE TOTAL NO. OF ELEMENTS := ");
	scanf("%d", &n);
	printf("Enter the elements in array:\n");
	for(i = 1;i <= n;i++)
	{
		printf("\nEnter ith the element := ",i);
		scanf("%d", &a[i]);
	}
	printf("\n\n\t\t\t *---* MinMax Simultaneouly *---* \n");
	printf("\n\n Input ARRAY  := \n\n");
	for(i =1;i <= n;i++)
	printf("%d\t",a[i]);
	MinMax(a,n);
	//printf("\n\nMinimum element = %d and Maximum Element=%d",min,max);
	getch();
}
void MinMax(int a[],int n)
{
	int min,max,i,j;
	if(n % 2==0)
	{
		if(a[1] < a[2])
		{
			min = a[1];
			max = a[2];
		}
		else
		{
			min = a[2];
			max = a[1];
		}
		j =2;
	}
	else
	{
		min = max = a[1];
		j =1;
	}

	for(i = j; i < n; i++)
	{
		if( a[i] < a[i+1])
		{
			if(a[i] < min )
				min = a[i];
			if (a[i+1] > max)
				max = a[i+1];
		}
		else
		{
		   if(a[i+1] < min )
				min = a[i];
			if (a[i] > max)
				max = a[i];
		}
	}
	printf("\n\nMinimum element = %d and Maximum Element=%d",min,max);
}
