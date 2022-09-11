// Borland C++ - (C) Copyright 1991 by Borland International

/*	HELLO.C -- Hello, world */

#include <stdio.h>

void main()
{       int a,b,c,d,e,f;
	clrscr();
	 printf("Enter first number\n");
	 scanf("%d", &a);
	 printf("Enter second  number \n");
	 scanf("%d", &b);
	 c = a+b;
	printf("Sum of two number= %d\n",c);
	 d = a*b;
	printf("Multiplication of two numbers are= %d\n",d);
	e = a/b;
	printf("Division of two numbers= %d\n",e);
       getch();
}
