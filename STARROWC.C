#include <stdio.h>
#include<conio.h>
void main()
{
int i,j,n, m;
printf(" enter the valu of m and n \n");
scanf("%d%d",&m,&n);
for(j=0;j<m; j++)
{
for(i=0; i<n ; i++)
{
printf("*\t");
}
printf("\n");
}
getch();
}