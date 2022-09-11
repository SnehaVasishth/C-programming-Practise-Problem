/* Accessing array elements using pointers is always faster then accessing them by subscripts.
	Array elements should be accessed using pointers, if the elements are to be accessed in a
	fixed order. It would be easier to access the elements using a subscript if there is
	no fixed logic in accessing the elemnts. */

#include<stdio.h>

void main()
{
	int a[10], i, *j, n;
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
	for(i=0, j = &a[0]; i < n; i++, j++)
	{
		  printf("\n address = %u and element =%d",j,*j);

	}
	getch();
}