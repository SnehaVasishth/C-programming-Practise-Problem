#include<stdio.h>
void main()
{
	int a[10],i,j,n, max;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i<n; i++)
	{
		  printf("number is:\n");
		  scanf("%d",&a[i]);
	}
	printf("Index   Element\n");
	for(i=0; i<n; i++)
	{
		  printf("%5d %10d\n",i, a[i]);

	}
	getch();
}