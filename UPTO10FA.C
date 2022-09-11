#include <stdio.h>
#include<conio.h>
void main()
{
int i,n, fact=1;
printf("enter number whose factoial has to calculate\n");
scanf("%d",&n);
for(i=1 ; i<=n;i++)
{fact=fact*i;
printf("factorial of %d is %d\n",i, fact);
}
getch();
}
