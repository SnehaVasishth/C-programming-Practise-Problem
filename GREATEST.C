#include <stdio.h>
#include<conio.h>
void main()

{
int  a, b, c;
scanf("%d%d%d", &a, &b, &c);
(a>b && a>c?printf("a is greatest\n"):(b>a && b>c?printf("b is greatest"):printf("c is greatest")));
getch();
}