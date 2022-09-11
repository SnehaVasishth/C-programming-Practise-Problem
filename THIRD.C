// Borland C++ - (C) Copyright 1991 by Borland International

/*	HELLO.C -- Hello, world */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{       int n,i,sum;
	sum =0;
	printf("Enter  number\n");
	 scanf("%d", &n);
	sum = (n*(n+1)) / 2;
	printf("Sum of  integer upto n = %d",sum);

	/* for(i=1; i<=n;i++)
	 {
		sum = sum+i;

	 } */

	 printf("Sum of integers from 1 to n = %d",sum);
	/* scanf("%f", &b);
	// c = a+b;
	printf("Sum of two number= %f\n",c);
	 d = a*b;
	printf("Multiplication of two numbers are= %f\n",d);
	e = a/b;
	printf("Division of two numbers= %f\n",e);  */

	getch();
}
