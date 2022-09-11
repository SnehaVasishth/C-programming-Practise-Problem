/* Deleting from a Linear Array */
#include<stdio.h>
void main()
{
	int a[10],i,j,n, pos, item;
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
	for(i=0; i < n; i++)
	{
		  printf("%d\n", a[i]);

	}
	printf("Enter position of the element which is to be deleted\n");
	scanf("%d", &pos);
	item = a[pos-1];
	printf("Deleted element is = %d\n", item);
	for(i=pos-1; i < n; i++)
	{
		a[i]= a[i+1];
	}
	printf("After Deletion operation, element are:\n");
	for(i=0; i < n-1; i++)
	{
		  printf("%d\n", a[i]);

	}

	getch();
}