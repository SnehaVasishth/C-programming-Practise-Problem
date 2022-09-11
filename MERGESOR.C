#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 20

void MergeSort(int a[], int p, int r);
void Merge(int a[], int p,int q, int r);
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
	printf("\n\n\t\t\t *---* MERGE SORT *---* \n");
	printf("\n\nARRAY BEFORE SORTING := \n\n");
	for(i =1;i <= n;i++)
	printf("%d\t",a[i]);
	p =1;
	r = n;
	MergeSort(a,p,r);
	printf("\n\nARRAY AFTER SORTING := \n\n");
	output(a,n);
	getch();
}
void MergeSort(int a[],int p,int r)
{
	int i, q;
	if( p < r)
	{
		q = (p+r) / 2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);
	}
}
void output(int a[], int n)
{
	int i;
	for(i =1;i<=n;i++)
		printf("%d\t",a[i]);
}
void Merge(int a[],int p,int q, int r)
{
	int i,j,k,n1,n2, L[10],R[10];
	n1 = q - p + 1;
	n2 = r - q;
	for(i = 1; i <= n1; i++)
		L[i] = a[p + i - 1];

	 for(j = 1; j <= n1; j++)
		R[j] = a[q + j];
	 L[n1+1] = 1000;
	 R[n2+1] = 1000;
	 i = 1;
	 j = 1;
	 for(j = p; j < r; j++)
	{
		if(L[i] <= R[j])
		{
			a[k]= L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
	}
}



