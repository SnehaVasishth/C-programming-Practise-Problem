#include<stdio.h>
void areaperi(int r,float *, float*);
void main()
{
int radius;
float area, perimeter;

scanf ("%d", &radius);
areaperi(radius,&area,&perimeter);
printf("radius=%d\t area= %f\t perimeter=%f\n", radius, area,perimeter);
printf("addres of radius=%u\n", &radius);
printf("addres of area=%u\n", &area);
printf("addres of perimeter=%u\n", &perimeter);
getch();
}
void areaperi(int r,float *a,float *p)
{
*a=3.14*r*r;
*p= 2 * 3.14 *r;
return;
}






