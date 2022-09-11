#include <stdio.h>
#include<conio.h>
void main()
{
int i,j , m[3][3];
float n[2][2];
clrscr();
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
 scanf("%d",&m[i][j]);
}
for(j=0; j<2; j++)
{
 scanf("%c",&n[i][j]);
}
}
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
printf("%d\t",&m[i][j]);
}
for(j=0; j<2; j++)
{
printf("\t%c",&n[i][j]);
}
printf("\n");
}
getch();
}
