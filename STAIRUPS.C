#include <stdio.h>
#include<conio.h>
void main()
{
int i,j, m;
printf(" enter the valu of m\n");
scanf("%d",&m);
for(j=1;j<=m; j++)
{
for(i=1; i<=j ; i++)
{
printf("*\t");
}
printf("\n");
}
getch();
}