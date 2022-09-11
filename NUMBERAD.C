#include <stdio.h>
#include<math.h>
void main()
{
int a,b, c, d,e,h,g;
printf("enter values");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
h = a * pow(10,4) + b * pow(10,3)+ c *pow(10,2) + d*pow(10,1)+e;
printf("print number %d\n",h);
g=(a+1) * pow(10,4) + (b+1) * pow(10,3) + (c+1) * pow(10,2)+ (d+1) * pow(10,1) + (e+1);
printf("print number %d\n",g);
getch();
}