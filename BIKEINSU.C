#include <stdio.h>
#include<conio.h>
void main()

{
int age ;
char ms, gender;
clrscr();
printf("Enter gender\n");
scanf("%c",&gender);
printf("%c",gender);
//fflush;
printf(" Enter ms\n");
scanf("%c",'\n');
scanf("%c",&ms);
printf("%c",ms);
printf(" enter age\n");
scanf("%d",&age);
printf("%d",age);

/*if(ms== 'M')
	printf("insured");
if(ms== 'N' && gender== 'P' && age > 30)
		printf("insured");

if(ms== 'N' && gender== 'F' && age > 25)
	printf("insured");
else
	printf("not insured");*/

if(ms== 'M')
	printf("insured");
else if(ms== 'N' && gender== 'P' && age > 30)
		printf("insured");

else if(ms== 'N' && gender== 'F' && age > 25)
	printf("insured");
else
	printf("not insured");

getch();
}
