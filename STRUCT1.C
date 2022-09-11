#include<stdio.h>
#include<string.h>

struct employee
{
	char name[20];
	int age;
	float salary;
};

void main()
{
	struct employee e1,e2,e3;
	clrscr();
	printf("Enter name , age and salary of e1:\n");
	gets(e1.name);
	scanf("%d %f", &e1.age, &e1.salary);
	printf("e1 details: Name Age   Salary\n");
	printf("\n\t %s %d %f\n", e1.name, e1.age, e1.salary);
	printf("\nAddress of name = %u\t age =%u\t salary=%u", &e1.name,&e1.age, &e1.salary);
	printf("\nsize of e1= %d", sizeof(e1));
	strcpy(e2.name,e1.name);
	e2.age = e1.age;
	e2.salary = e1.salary;
	e3 = e2;
	printf("\n\t %s %d %f\n", e2.name, e2.age, e2.salary);
	printf("\n\t %s %d %f\n", e3.name, e3.age, e3.salary);
	getch();
}