#include<conio.h>
void main()
{
int i,j, m;
j=0;
i=1;
printf(" enter the valu of m\n");
scanf("%d",&m);
while(j<m)
{
i=1;
while(i<=j)
{
printf("\t");
i++;
}
i=1;
while(i<=m-j)
{
printf("*\t");
i++;
}
printf("\n");
j++;
}
getch();
}