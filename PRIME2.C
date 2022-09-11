#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
switch(ch)
{
case'a':
case '1':
printf("a stands for apple\n");
break;
case 'b':
case '2':
printf("b stands for brain\n");
break;
case 'c':
case '3':
printf("c stand sfor cat\n");
break;
default:
printf("I am in default case \n");
}
getch();
}

