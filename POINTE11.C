/*  Two dimensional Array is an array of arrays */
#include<stdio.h>

void main()
{
	int marks[][2] = {
						{ 101, 80 },
						{ 102, 85 },
						{ 103, 75 },
						{ 104, 70 }

					 };
	int i;
	clrscr();
	printf("Roll No and Marks\n\n");
	for(i = 0; i <=3; i++)
		printf("\n Roll No. =%5d and Marks = %5d",marks[i][0], marks[i][1]);
	for(i = 0; i <=3; i++)
		printf("\n Address of %d th 1-d array  = %u", i,marks[i]);
	getch();
}