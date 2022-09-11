#include <stdio.h>
void main()

{
char gender, qual;
int yos, salary;
printf("enter gender, yos, qualification and salary");
scanf("%c%d%c",&gender,&yos,&qual);
if(gender=="male" && qual=="pg"&& yos>=10)
	printf("salary=15000\n");
if(gender=="male" && qual=="g"&& yos>=10)
	printf("salary=10000\n");
if(gender=="male" && qual=="pg"&& yos<10)
		printf("salary=10000\n");
if(gender=="male" && qual=="g"&& yos<10)
		printf("salary=7000\n");
if(gender=="female" && qual=="pg"&& yos>=10)
		printf("salary=12000\n");
if(gender=="female" && qual=="g"&& yos>=10)
		printf("salary=9000\n");
if(gender=="female" && qual=="pg"&& yos<10)
		printf("salary=10000\n");
if(gender=="female" && qual=="g"&& yos<10)
		printf("salary=6000\n");
getch();
}



