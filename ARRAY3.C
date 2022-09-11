#include<stdio.h>
void main()
{
	int a[10],i,j,n, max, min, pos, item;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i<n; i++)
	{
		  printf("Number is:\n");
		  scanf("%d",&a[i]);
	}
	printf("Entered numbers are\n");
	for(i=0; i<n; i++)
	{
		  printf("%d\n", a[i]);

	}
	printf("Enter item and position where item is to be inserted");
	scanf("%d%d", &item, &pos);
	for(i = n-1; i >= pos-1; i--)
	{
		a[i+1]= a[i];
	}
	a[pos-1] = item;
	printf("After insertion element are:\n");
	for(i =0; i < n+1; i++)
	{
		  printf("%d\n", a[i]);
	}
	getch();
}