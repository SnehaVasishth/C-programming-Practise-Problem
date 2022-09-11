#include <stdio.h>
#include<conio.h>
void main()
{
int n,i;
i=2;
printf("enter value of n\n");
scanf("%d", &n);
while(i<n)
{
if(n%i==0)
printf("%dis not a prime number\n",n);
printf("%dis the factor of%d\n",i,n);
break;
i++;
}
if(i==n)
printf("%d is a prime number\n",n);
getch();
}