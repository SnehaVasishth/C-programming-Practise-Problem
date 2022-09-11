#include <stdio.h>
#include<conio.h>
void main()
{
int i, n, num, fact;
clrscr();
fact=1;
i=1;
printf("enter the value of num and n\n");
scanf("%d%d", &num,&n);
while(i<=num)
{
fact=fact*i;
if(fact>n)
{
printf("%d is factorial of %d which is greater than %d \n", fact, i, n);
break;
}
i++;
}
getch();
}
