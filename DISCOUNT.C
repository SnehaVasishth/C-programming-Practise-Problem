#include <stdio.h>
void main()
{
int qty,rate,dis,total;
clrscr();
printf("price of one piece\n");
scanf("%d", &rate);
printf("enter qty\n");
scanf("%d", &qty);
if(qty<1000)
{
 dis=10;
total=rate*qty -(rate*qty*dis)/100;
 }
 else
 {
 dis=0;
 total=rate*qty-(rate*qty*dis)/100;
}
printf("total=%d",total);


 getch();
}