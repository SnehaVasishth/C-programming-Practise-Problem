#include <stdio.h>
void main()

{
int i, y;
printf("enter the value of i\n");
scanf("%d", &i);
y=(i==5?printf("you enter the value 5\n"):printf("you enter value other than 5\n"));
getch();
}