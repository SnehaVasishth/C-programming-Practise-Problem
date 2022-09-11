#include <stdio.h>
#include<conio.h>
void main()
{
int i, myarray[10];
for(i=0;i<10;i++)
{scanf("%d",&myarray[i]);}
printf("\n");
for(i=0;i<10;i++)
printf("%d\t",myarray[i]);
getch();
}