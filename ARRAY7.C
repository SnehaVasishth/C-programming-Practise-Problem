/* Deleting  duplicates from a Linear Array */
#include<stdio.h>
void read_array( int a[], int);
void display_array( int a[], int);
void delete_duplicate (int a[], int);
void main()
{
	int a[10],n;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	read_array(a,n);
	printf("Entered numbers are\n");
	display_array(a,n);
	delete_duplicate(a,n);
	getch();
}

void read_array( int a[], int n)
{
	int i;
	for(i=0; i < n; i++)
	{
		  printf("a[%d]:", i);
		  scanf("%d",&a[i]);
	}
}
void display_array( int a[], int n)
{
	int i;
	for(i=0; i < n; i++)
	{
		  printf("%5d\n", a[i]);

	}
}

void delete_duplicate (int a[], int n)
{
	int i,j,k,num,flag =0;
	num = n;
	for(i =0; i < n-1; i++)
		for(j = i+1; j < n; j++)
		{
			if( a[i] ==a[j])
			{
				//n = n-1;
				for(k = j; k < n; k++)
					a[k]= a[k+1];
				n = n-1;
				flag = 1;
			       //	j = j-1;
			}

		}
	if(flag ==0)
		printf("\n No duplicatwes elements found in array\n");
	else
	{
		printf("\n Array has %d duplicates elements \n", num -n);
		printf("Array after deleting duplicates :\n");
		display_array(a,n);
	}
}