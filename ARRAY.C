#include<stdio.h>
void main()
{
	int a[10],i,j,n, max;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i < n; i++)
	{
		  printf("Enter number is:\n");
		  scanf("%d",&a[i]);
	}
	printf("Entered numbers are\n");
	for(i=0; i<n; i++)
	{
		  printf("%d\n", a[i]);

	}
	max =a[0];
	for(i=1; i < n; i++)
	{
		if(a[i] > max)
		  max= a[i];
	}
	printf("largest number is:%d", max);
	getch();
}