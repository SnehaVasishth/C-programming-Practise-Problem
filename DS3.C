#include<stdio.h>

void read_matrix(int a[][10],int, int );

void write_matrix(int a[][10], int, int);

void add(int a[][10], int b[][10], int, int, int, int);

void subtract(int a[][10], int b[][10], int, int, int, int);

void tringular_matrix( int a[][10], int, int);

void trace( int a[][10], int);

void transpose( int a[][10], int, int);

void symmetry(int a[][10], int, int);

void multiply( int a[][10], int b[][10], int, int, int, int);

void main()
{
	int a[10][10],b[10][10], c[10][10];
	int i,j,k,m,n, p, q;
	char ch;
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
	printf("a\t Addition of two Matrices\n");
	printf("b\t Subtraction of two matrices\n");
	printf("c\t Finding upper and lower triangula matrices\n");
	printf("d\t Trace of a Matrix\n");
	printf("e\t Transpose of a Matrix\n");
	printf("f\t Check of matrix symmetry\n");
	printf("g\t Product of two matrices\n");
	fflush(stdin);
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
				add(a,b,m,n,p,q);;
				break;
		case 'b':
				subtract(a,b,m,n,p,q);
				break;

		case 'c':
				tringular_matrix(a,m,n);
				break;
		case 'd':
				trace(a,m);
				break;

		case 'e':
				transpose(a,m,n);
				break;
		case 'f':
				symmetry(a,m,n);
				break;
		case 'g':
				multiply(a,b,m,n,p,q);
				break;
		default:
				printf(" wrong option");
				break;
	 }
	getch();
}
void read_matrix(int a[][10],int m,int n)
{
	int i,j;
	for(i=0; i < m; ++i)
		for(j=0; j < n; ++j)
			  scanf("%d",&a[i][j]);
}
void write_matrix(int a[][10], int m,int n)
{
	int i,j;
	for(i=0; i < m; ++i)
	{
		for(j=0; j < n; ++j)
			  printf("%5d",a[i][j]);
		printf("\n");
	 }
}

void add(int a[][10], int b[][10], int m, int n, int p, int q)
{
int c[10][10], i,j;
if((m==p) && (n== q))
{
	printf("Matrices can be added\n");
	for(i=0; i < m; i++)
		for(j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
	printf("Sum of A and B Matrices :\n");
	write_matrix(c,m,n);
}
else
	printf("Matrices can not be added\n");
}
void subtract(int a[][10], int b[][10], int m, int n, int p, int q)
{
int c[10][10], i,j;
if((m==p) && (n== q))
{
	printf("matrices can be subtracted\n");
	for(i=0; i < m; i++)
		for(j = 0; j < n; j++)
			c[i][j] = a[i][j] - b[i][j];
	printf("Sum of A and B matrices :\n");
	write_matrix(c,m,n);
}
else
	printf("Matrices can not be subtracted\n");
}

void tringular_matrix( int a[][10], int m, int n)
{
	int i, j, sum1 = 0, sum2 =0;
	for(i = 0; i < m; i++)
		for(j = i+1; j < n; j++)
			sum1 += a[i][j];
	for(i = 0; i < n; i++)
		for(j = i+1; j < m; j++)
		sum2 += a[j][i];

	if(sum1 == 0 && sum2 != 0)
		printf("A matrix is lower triangular\n");
	else if( sum1 !=0 && sum2 ==0)
		printf("A matrix is upper triangular\n");
	else if ( sum1 ==0 && sum2 ==0)
		printf("A matrix is Diagonl\n");
	else
		printf("A matrix is neither triangular nor diagonal\n");
}
void trace( int a[][10], int m)
{   /* Trace = sum of the diagonal elements of the matrix */
	int trace = 0, i;
	for(i = 0; i < m; i++)
		trace += a[i][i];
	printf("Trace = %d\n", trace);

}
void transpose( int a[][10], int m, int n)
{
	int c[10][10],i,j;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			c[i][j] = a[j][i];
	printf("Transpose of A matrix is:\n");
	write_matrix(c,n,m);
}

void symmetry(int a[][10], int m, int n)
{
	int c[10][10], i, j, flag = 0;
	if( m != n)
		printf("A matrix is not a square matrix and it can not be symmetric\n");
	else
	{
		printf("We can check for symmetry\n");
		for(i = 0; i < n; i++)
			for(j = 0; j < m; j++)
				c[i][j] = a[j][i];
		printf("Transpose of A matrix is:\n");
		write_matrix(c,n,m);
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < m; j++)
			{
				if( c[i][j] != a[i][j] )
					flag = 1;
			}
		}
	}
if(flag)
	printf("A Matrix is not symmetric\n");
else
	printf("A matrix is symmetric\n");
}
void multiply( int a[][10], int b[][10], int m, int n, int p, int q)
{
	int c[10][10], i,j,k;
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
