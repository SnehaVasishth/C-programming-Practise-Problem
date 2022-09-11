#include <stdio.h>
#include<conio.h>
void main()
{
int n, i, myarray[12], min, max;
clrscr();
printf("enter the value of n\n");
scanf("%d",&n);
for(i=0; i<n ; i++)
{
scanf("%d",&myarray[i]);
printf("%d\n", myarray[i]);


}
max=0;min=9999;
for(i=0; i<n ; i++)
{
if(myarray[i]> max)
max= myarray[i];
if(myarray[i]<min)
min= myarray[i];
}
printf("%d\t%d are maximum and minimum value respectively\n", max, min);
getch();
}