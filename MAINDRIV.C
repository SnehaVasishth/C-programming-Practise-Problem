#include<stdio.h>
void main()
{
int choice, fact= 1, num, i ;
clrscr();
while(1)
{
printf("1.factorial\n");
printf("2.odd/even\n");
printf("3.prime/composite\n");
printf ("4.exit\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter number\n");
scanf("%d",&num);
for(i=1; i<=num; i++)
{
fact = fact * i;
}
printf("%d is the factorial of %d\n", fact,num);

case 2:
printf("Enter number\n");
scanf("%d",&num);
if(num % 2 == 0)
printf("%d is even number\n",num);
else
printf("%d is odd number\n",num);
break;
case 3:
scanf("%d",&num);
i=2;
for(;i < num;i++)

{
	if(num % i == 0)
	{
		printf("%d is a composite number\n",num);
		break;
	}
}
if(i==num)
printf("%d is a prime number\n",num);
break;
case 4:
exit(0);
default:
printf("wrong choice\n");
}
}
getch();
}





