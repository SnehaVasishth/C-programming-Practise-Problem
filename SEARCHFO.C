#include <stdio.h>
#include<conio.h>
void main()
{
int i, m[5], n[5],  found=0, key=4, count=0;
clrscr();
printf("enter the numbers in array\n");
for(i=0; i<5; i++)
scanf("%d", &m[i]);
for(i=0; i<5; i++)
printf("%d\t", m[i]);

for(i=0; i<5; i++)
{
if(key==m[i])
{
n[i]= 1;
printf("\n m[%d]is equal to %d\n",i, key);
count++;
}
else
n[i]= 0;
}
for(i=0; i<5; i++)
printf("%d\t", n[i]);
for(i=0; i<5; i++)
{
if(n[i]==1)
{
found=1;
break;
}
}
printf("\nthe value of found is %d\n", found);
if(found==0)
printf("there is no %d in the array m[5]", key);
printf("\nthe number of times %d is present in array is %d", key ,count);
getch();
}

