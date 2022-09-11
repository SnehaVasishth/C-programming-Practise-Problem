#include<stdio.h>
#include<math.h>
void main()

{
int i, x;
float sum, a;
sum= (x-1)/x;
for (i=2; i<=7; i++)
{
a= pow(((x-1)/x),i);

sum= sum+ (a/2);
}
printf("%f\n",sum);
getch();
}
