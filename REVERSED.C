#include <stdio.h>
#include<math.h>
void main()
{
int a,b, c, d,e,h,g;
printf("enter values");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
h=a*10*10*10*10+b*10*10*10+c*10*10+d*10+e;
printf("print number %d\n",h);
g=e*10*10*10*10+d*10*10*10+c*10*10+b*10+a;
printf("print number %d\n",g);
getch();
}