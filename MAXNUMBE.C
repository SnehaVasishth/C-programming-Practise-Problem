#include <stdio.h>
void main()

{
int max,n, num;
n=1;
max=0;
printf("enter number\n");
scanf("%d",&num);
while(num>max&&n<=10);
{
printf("%dis maximum\n",max);
n=n+1;
}
printf("%dis maximum\n",max);
getch();
}



