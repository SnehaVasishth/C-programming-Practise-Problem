
//explaining the use ofgoto
//name: GOTO
//date: 20 nov 2021

#include<stdio.h>
void main()
{
int i, num;
clrscr();

for(int i=0; i<5; i++)

{
printf("show i %d\n",i);
for(int j=0; j=6; j++)
{
printf("show j %d\n",j);
printf("will exit through lop if enter 0\n");
scanf("%d", &num);
if(num==0)
{
goto end;
}
}
}
end:
getch();
}


