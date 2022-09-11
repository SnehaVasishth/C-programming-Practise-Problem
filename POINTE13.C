/*  Passing 2-D array to a function */
/* Three ways of accessing a 2-D array  */

#include<stdio.h>

void display( int *ptr, int, int);
void print(int b[][2], int, int);
void read(int (*ptr)[2], int,int);

void main()
{
	int marks[4][2] = {
						{ 101, 80 },
						{ 102, 85 },
						{ 103, 75 },
						{ 104, 70 }

					 };
	clrscr();
	printf("Roll No and Marks\n\n");
	display(marks,4,2);
	print(marks,4,2);
	read(marks,4,2);
	getch();
}
 void display(int *ptr, int row, int col)
{
	int i,j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
			printf("%5d", *( ptr + i * col +j) );
	 printf("\n");
	}
	printf("\n");
}
void print(int a[][2], int row, int col)
{

	int i,j;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%5d", a[i][j] );
		}
		printf("\n");
	}
	printf("\n");
}
void read(int (*ptr)[2], int row, int col)
{
	int i,j;
	int *p;

	for(i = 0; i < row; i++)
	{
		p = ptr + i;
		for(j = 0; j < col; j++)
		{
			printf("%5d", *(p+j) );
		}
		printf("\n");
	}
	 printf("\n");
}