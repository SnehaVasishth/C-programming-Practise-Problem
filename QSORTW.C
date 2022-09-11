#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 20

void QuickSort(int a[], int p, int r);
int Partition(int a[], int p, int r);
void swap(int *a, int *b);
void output(int a[], int n);

void main()
{
	int a[MAX],p,r,n,i;
	clrscr();
	printf("\nENTER THE TOTAL NO. OF ELEMENTS := ");
	scanf("%d", &n);
	printf("Enter the elements in array:\n");
	for(i = 1;i <= n;i++)
	{
		printf("\nEnter ith the element := ",i);
		scanf("%d", &a[i]);
	}
	printf("\n\n\t\t\t *---* QUICK SORT *---* \n");
	printf("\n\nARRAY BEFORE SORTING := \n\n");
	for(i =1;i <= n;i++)
	printf("%d\t",a[i]);
	p =1;
	r = n;
	QuickSort(a,p,r);
	printf("\n\nARRAY AFTER SORTING := \n\n");
	output(a,n);
	getch();
}
void swap(int *a, int *b)
{
	int temp;
	temp =*a;
	*a = *b;
	*b =temp;
}
void QuickSort(int a[],int p,int r)
{
	int i, q;
	// printf("%d%d\n",p,r);
	if( p < r)
	{
		q = Partition(a,p,r);
		printf("\nq=%d\t",q);
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}
void output(int a[], int n)
{
	int i;
	for(i =1;i<=n;i++)
		printf("%d\t",a[i]);
}
int Partition(int a[],int p,int r)
{
	int x,i,j,temp;
	//printf("%d%d\n",p,r);
	x = a[r];
	i = p-1;
	for(j = p; j < r; j++)
	{
		if(a[j] <= x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
 }


