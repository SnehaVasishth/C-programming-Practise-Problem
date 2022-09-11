#include <stdio.h>
#include<conio.h>
void main()
{
int n, i, myarray[12], sum=0;
scanf("%d", &n);
for(i=0; i<n ; i++)
{
scanf("%d",&myarray[i]);
sum= sum+ myarray[i];
}
for(i=0; i<n ; i++)
{
printf("%d\t", myarray[i]);
}
printf("\n%d", sum);
getch();
}

