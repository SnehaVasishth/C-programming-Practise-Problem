#include <stdio.h>
#include<math.h>
void main()
{
float a,b, c, d,e,h,g;
printf("enter values\n");
scanf("%f,%f,%f,%f,%f",&a,&b,&c,&d,&e);
h=a*10*10*10*10+b*10*10*10+c*10*10+d*10+e;
prinf("print number %f\n",h);
g=a+b+c+d+e;
printf("print sum  %f",g);
getch();
}