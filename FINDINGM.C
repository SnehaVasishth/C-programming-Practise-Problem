#include <stdio.h>
#include<conio.h>
void main()
{
int i, myarray[10], max;
for(i=0;i<10;i++)
{scanf("%d",&myarray[i]);}
printf("\n");
for(i=0;i<10;i++)
printf("%d\t",myarray[i]);
max=0;
printf("\n print the maximum value out of 10 numbers enter in the array\n");
i=0;
while(i<10)
{
if(myarray[i]>max)
max=myarray[i];
i++;
}
printf("%d",max);
getch();
}