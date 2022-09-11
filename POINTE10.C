/*  Accessing array elements in different ways */
#include<stdio.h>

void main()
{
	int a[] = { 10, 20, 30, 40, 50 };
	int i =0;
	clrscr();
	printf("address and accessing element in four different ways\n\n");
	while(i < 5)
	{
		printf("\n address = %u ", &a[i]);
		printf("element = %d %d %d %d", a[i], *(a+i), *(i+a),i[a] );
		i++;
	}

	getch();
}