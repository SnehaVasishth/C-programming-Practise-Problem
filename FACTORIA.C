#include <stdio.h>

int fact(int n)
{
int i, fact=1;
for(i=1 ; i<=n;i++)
{
    fact=fact*i;
}
return(fact);


}

int main()
{
int n;
printf("enter number whose factoial is to calculate\n");
scanf("%d",&n);
printf("factorial of %d is %d\n",n, fact(n));
return 0;
}
