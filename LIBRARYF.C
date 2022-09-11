#include <stdio.h>
#include<conio.h>
void main()

{
int no_of_days;
scanf("%d", &no_of_days);
if(no_of_days<=5)
	printf("fine is 50 paisa\n");
if(no_of_days>5 && no_of_days<=10)
printf("fine is 1 rupees \n");
if(10<no_of_days<30)
	printf("fine is 5 rupees \n");
if(no_of_days> 30)
	printf(" membership is cancelled\n");
getch();
}
