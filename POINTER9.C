/*  Passing an Entire Array to a Function */
#include<stdio.h>

void display( int *j, int n)
{
	int i = 0;
	while(i < n)
	{
		 printf("\n address = %u and element =%d",j,*j);
		i++;
		j++;
	}
}
void main()
{
	int a[10],i,*j,n;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i < n; i++)
	{
		  printf("a[%d] is:", i);
		  scanf("%d",&a[i]);
	}
	printf("Entered numbers and their addresses are\n");
   /* 	display(&a[0],n); */
	display(a,n);
	getch();
}