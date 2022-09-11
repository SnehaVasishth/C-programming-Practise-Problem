#include<stdio.h>

void read_matrix(int a[][5],int, int );

void write_matrix(int a[][5], int, int);

void add(int a[][5], int b[][5], int, int, int, int);

void subtract(int a[][5], int b[][5], int, int, int, int);

void trace( int a[][5], int);

void transpose( int a[][5], int, int);

void symmetry(int a[][5], int, int);

void multiply( int a[][5], int b[][5], int, int, int, int);

void tringular_matrix( int a[5][5], int m, int n);

void main()
{
	int a[5][5],b[5][5], c[5][5];
	int i,j,k,m,n, p, q,ch;
	clrscr();
	printf("Enter rows and columns of A matrix:\n");
	scanf("%d%d", &m, &n);
	printf("Input A- Matrix\n");
	read_matrix(a,m,n);
	write_matrix(a,m,n);
	printf("Enter rows and columns of B matrix:\n");
	scanf("%d%d", &p, &q);
	printf("Input B- Matrix\n");
	read_matrix(b,p,q);
	write_matrix(b,p,q);
	printf("Enter you choice:\n");
	printf("1\t Addition of two Matrices\n");
	printf("2\t Subtraction of two matrices\n");
	printf("3\t Finding upper and lower triangula matrices\n");
	printf("4\t Trace of a Matrix\n");
	printf("5\t Transpose of a Matrix\n");
	printf("6\t Check of matrix symmetry\n");
	printf("7\t Product of two matrices\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
				add(a,b,m,n,p,q);;
				break;
		case 2:
				subtract(a,b,m,n,p,q);
				break;

		case 3:
				tringular_matrix(a,m,n);
				break;
		case 4:
				trace(a,m);
				break;

		case 5:
				transpose(a,m,n);
				break;
		case 6:
				symmetry(a,m,n);
				break;
		case 7:
				multiply(a,b,m,n,p,q);
				break;
		default:
				printf(" wrong option");
				break;
	 }
	getch();
}
void read_matrix(int a[5][5],int m,int n)
{
	int i,j;
	for(i=0; i < m; ++i)
		for(j=0; j < n; ++j)
			  scanf("%d",&a[i][j]);
}
void write_matrix(int a[5][5], int m,int n)
{
	int i,j;
	for(i=0; i < m; ++i)
	{
		for(j=0; j < n; ++j)
			  printf("%5d",a[i][j]);
		printf("\n");
	 }
}

void add(int a[5][5], int b[5][5], int m, int n, int p, int q)
{
int c[5][5], i,j;
if((n==p) && (m== q))
{
	printf("matrices can be added\n");
	for(i=0; i < n; i++)
		for(j = 0; j < m; j++)
			c[i][j] = a[i][j] + b[i][j];
	printf("Sum of A and B matrices :\n");
	write_matrix(c,m,n);
}
else
	printf("matrices can not be added\n");
}
void subtract(int a[5][5], int b[5][5], int m, int n, int p, int q)
{
int c[5][5], i,j;
if((n==p) && (m== q))
{
	printf("matrices can be subtracted\n");
	for(i=0; i < n; i++)
		for(j = 0; j < m; j++)
			c[i][j] = a[i][j] - b[i][j];
	printf("Sum of A and B matrices :\n");
	write_matrix(c,m,n);
}
else
	printf("matrices can not be subtracted\n");
}
void trace( int a[5][5], int m)
{   /* Trace = sum of the diagonal elements of the matrix */
	int trace = 0, i;
	for(i = 0; i < m; i++)
		trace += a[i][i];
	printf("Trace = %d\n", trace);

}
void transpose( int a[5][5], int m, int n)
{
	int c[5][5],i,j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			c[j][i] = a[i][j];
	write_matrix(c,n,m);
}
void symmetry(int a[5][5], int m, int n)
{
 int c[5][5],i,j,count=0;
 for(i = 0; i < n; i++)
	for(j = 0; j < m; j++)
		c[i][j] = a[j][i];
 for(i = 0; i < m; i++)
	for(j = 0; j < n; j++)
	{
	  if(c[i][j] == a[i][j])
			count = count +1;
	}
 if(count == m * n)
	printf("A matrix is symmetry");
 else
	printf("A matrix is not symmetry");
}
void multiply( int a[5][5], int b[5][5], int m, int n, int p, int q)
{
	int c[5][5], i,j,k;
	if(n !=p)
		printf("matrices are not compatable and can not be multiplied\n");
	else
	{
		printf("matrices acn be multiplied\n");
		printf("resultant matrix is : %d x %d\n", m, q);
		for(i = 0; i < m; i++)
			for(j = 0; j < q; j++)
			{
				c[i][j] = 0;
				for(k=0; k < n; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
			write_matrix(c,m,q);
	}
}
void tringular_matrix( int a[5][5], int m, int n)
{
	int i, j, sum1 = 0, sum2 =0;
	for(i = 0; i < m; i++)
		for(j = i+1; j < n; j++)
			sum1 += a[i][j];
	for(i = 0; i < n; i++)
		for(j = i+1; j < m; j++)
		sum2 += a[j][i];

	if(sum1 == 0 && sum2 != 0)
		printf("A matrix is lower traingular\n");
	else if( sum1 !=0 && sum2 ==0)
		printf("A matrix is upper traingular\n");
	else if ( sum1 ==0 && sum2 ==0)
		printf("A matrix is Diagonl\n");
	else
		printf("A matrix is neither triangular nor disgonal\n");
}