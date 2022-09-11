#include <stdio.h>
void main()

{
int  avg, n, sum, num;
clrscr();
n=1;
sum=0;
while(n<=3)
{
printf("enternumber\n");
scanf("%d",num);
sum=sum+num;
n=n+1;
}
avg=sum/n;
printf("print average%d\n",avg);

  getch();
 }


