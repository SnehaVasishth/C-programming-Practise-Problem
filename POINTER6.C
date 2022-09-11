#include<stdio.h>
void main()
{
	int a[10],i,*j,n;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i<n; i++)
	{
		  printf("a[%d] is:", i);
		  scanf("%d",&a[i]);
	}
	printf("Entered numbers and their addresses are\n");
	for(i=0; i < n; i++)
	{
		  printf("\n address = %u and element =%d",&a[i], a[i]);

	}
	getch();
}