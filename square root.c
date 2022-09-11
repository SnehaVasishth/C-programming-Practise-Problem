#include<stdio.h>
#include<math.h>
void main()
{
float A,B,a,b,c,D,d,img,real;
printf("Enter the coefficients a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
D= (b*b)-(4*a*c);
printf("Value of D=%f\n",D);
d= sqrt(D);
printf("Value of d=%f\n",d);
getch();
}
