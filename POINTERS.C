#include<stdio.h>
#include<conio.h>

void main()
{
int i=3,*j;
j=&i;
clrscr();
printf("address of i=%u\n",&i);
printf("value of i=%u\n",*j);
printf("value of i=%u\n",i);
printf("value of i=%u\n",*(&i));
printf("address of j=%u\n",&j);
printf("value of j=%u\n",j);
printf("value of j=%u\n",*(&j));
getch();
}
