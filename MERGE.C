#include<stdio.h>
void mergingSortedArrays( int a[], int,int b[], int);
void main()
{
	int a[10],b[10],m,n,i;
	clrscr();
	printf("Enter size of a matrix:\n");
	scanf("%d", &m);
	printf("Enter %d numbers in ascending orderin a matrix:\n", m);
	for(i=0; i < m; i++)
	{
		  printf("\nNumber is: %d\t",i);
		  scanf("%d",&a[i]);
	}
	printf("Enter size of b matrix:\n");
	scanf("%d", &n);
	printf("Enter %d numbers in ascending orderin b matrix:\n", n);
	for(i=0; i < n; i++)
	{
		  printf("\nNumber is:%d\t",i);
		  scanf("%d",&b[i]);
	}
	printf("Entered numbers in a matrix are\n");
	for(i=0; i < m; i++)
	{
		  printf("%d\t", a[i]);

	}
	printf("\nEntered numbers in b matrix are\n");
	for(i=0; i < n; i++)
	{
		  printf("%d\t", b[i]);
	}
	mergingSortedArrays(a,m,b,n);
	getch();
}
void mergingSortedArrays( int a[], int m, int b[], int n)
{
	int c[20],na,nb,nc,i;
	na = nb=nc=0;
	while( (na < m) && ( nb < n) )
	{
		if(a[na] < b[nb])
			c[nc] = a[na++];
		else
		   c[nc] = b[nb++];
		nc++;
	}
	if(na ==m)
	{
		while(nb < n)
			c[nc++] = b[nb++];
	}
	else if(nb==n)
	{
		while(na < m)
			c[nc++] = a[na++];
	}
   printf("\nAfter merging operation, the resulting c matrix:\n");
	for(i= 0; i < nc; i++)
	{
		  printf("\n%d\n", c[i]);
	}
}