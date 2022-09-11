#include <stdio.h>
#include<conio.h>
void main()
{
int i,j,k, count=0;
clrscr();
printf("total combination of 1,2,3\n");
for(i=1; i<=3; i++)
{
for(j=1; j<=3; j++)
{
for(k=1; k<=3; k++,count++)
{
printf("%d,%d,%d\t",i,j,k);

}
printf("\n");
}
}
printf("%d is the total combinaton\n", count);
getch();
}


