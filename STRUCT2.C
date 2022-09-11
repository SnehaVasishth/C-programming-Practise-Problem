#include<stdio.h>
#include<string.h>

struct address
	{
		char city[25];
		char phone[12];
		long int pin;
	 };

	struct employee
	{
		char name[20];
		int age;
		struct address a;
		float salary;
	};

void main()
{
	struct employee e ={ "Manoj",32,"Delhi","9891008568", 250106, 50000 };
	clrscr();
	printf("\n name = %s age = %d Salary = %f", e.name,e.age,e.salary);
	printf("\n City = %s Phone =%s Pin =%ld\n", e.a.city, e.a.phone, e.a.pin);
	getch();
}