/*  Pointer notation to access 2-D array elements */
/*The following expressions refer to the same element
  1.  marks[2][1]
  2.  *(marks[2] +1)
  3.  *(*(marks+2) +1)  */

#include<stdio.h>

void main()
{
	int marks[][2] = {
						{ 101, 80 },
						{ 102, 85 },
						{ 103, 75 },
						{ 104, 70 }

					 };
	int i,j;
	clrscr();
	printf("Roll No and Marks\n\n");

	for(i = 0; i <=3; i++)
	{
		printf("\n");
		for(j = 0; j <=1; j++)
		  printf("%5d", *(*(marks +i) +j) );
	}
	getch();
}