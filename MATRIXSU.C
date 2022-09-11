#include <stdio.h>
#include<conio.h>
void main()
{
int i, A[10][10], B[10][10],C[10][10], j,m,n;
clrscr();
printf("enter row and column in A,B and C matrix\n");
scanf("%d",&m);
scanf("%d",&n);
printf("Enter values in A matrix\n");

for(i = 0; i < m; i++)
{
	for(j = 0; j < n; j++)
	scanf("%d", &A[i][j]);
}


printf("Enter values in B matrix/n");
for(i = 0; i < m; i++)
{
	for(j = 0; j < n; j++)
	scanf("%d", &B[i][j]);
}

for(i = 0; i <m; i++)
{
	for(j = 0; j < n; j++)
	C[i][j] = A[i][j] - B[i][j];
}
printf("Values of A matrix\n");

for(i = 0; i < m; i++)
{
	for(j=0; j < n; j++)
		printf("%d\t", A[i][j]);
	printf("\n");
}
printf("Values of B matrix\n");

for(i = 0; i < m; i++)
{
	for(j=0; j < n; j++)
		printf("%d\t", B[i][j]);
	printf("\n");
}
printf("Values of C matrix\n");

for(i = 0; i < m; i++)
{
	for(j=0; j < n; j++)
		printf("%d\t", C[i][j]);
	printf("\n");
}
getch();
}

