// Borland C++ - (C) Copyright 1991 by Borland International

/*	HELLO.C -- Hello, world */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{       int a,b,c,D;
	float R1,R2;
	//sum =0;
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	printf("Enter c:\n");
	scanf("%d", &c);
	D = b*b - 4 *a *c;
	if(D < 0)
		printf("Imaginary roots");
	else
	    {
	    R1 = (-b+ sqrt(D)) / 2*a;
	    R2 = (-b - sqrt(D)) / 2*a;
	    printf("First root = %f", R1);
	    printf("Second root = %f", R2);
	    }
	getch();
}
