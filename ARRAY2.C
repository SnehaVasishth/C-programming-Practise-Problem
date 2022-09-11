#include<stdio.h>
void main()
{
	int a[10],i,j,n, max, min;
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
	max = min =a[0];
	for(i=1; i<n; i++)
	{
		if(a[i] > max)
		  max = a[i];
		else if (a[i] < min)
		min = a[i];
	}
	printf("Largest number is:%d \nSmallest number is: %d", max, min);
	getch();
}