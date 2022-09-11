#include<stdio.h>
void main()
{
	int a[10],i,j,n, sum=0;
	float avg;
	clrscr();
	printf("Enter number of element:\n");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	for(i=0; i < n; i++)
	{
		  printf("number is:");
		  scanf("%d",&a[i]);
	}
	printf("Index   Element\n");
	for(i=0; i < n; i++)
	{
		  printf("%5d %8d\n",i, a[i]);

	}
	for(i=0; i < n; i++)
		sum += a[i];

	avg = (float)sum / n;
	printf("\n sum = %d\n", sum);
	printf("\n average = %f\n", avg);
	getch();
}
