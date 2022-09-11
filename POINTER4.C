/*  Using ' call by reference' intelligently we can make  a function return more than one value at a time,
	which is not possible ordinarily. We are passing the addresses, any change that we make in values
   stored at addresses contained in the variables a and c, would
   make the change effective even in main(). */
#include<stdio.h>
#define PI 3.14
void areaCircumference( int r, float *a, float *c)
{
	*a = PI * r * r;
	*c = 2 * PI * r;
}

void main()
{
	int radius;
	float area, circumference;
	printf("Enter the radius of a circle\n ");
	scanf("%d", &radius);
	areaCircumference( radius, &area, &circumference);
	printf("\n Area = %f and Circumference = %f\n",area,circumference);
	getch();
}
