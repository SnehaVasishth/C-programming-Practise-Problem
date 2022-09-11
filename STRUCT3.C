/* To access the structure elements using three methods */
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
/* Passing entire structure variable at a time to function  */
void display(struct employee);
/* Passing individual structure elements to function  */
void print(char *, int, char *, char *,long int, float);
/* Passing address of a structure variable to function through structure pointer  */
void read( struct employee *);
void main()
{
	struct employee e ={ "Manoj",32,"Delhi","9891008568", 250106, 50000 };
	clrscr();
	display(e);
	print(e.name,e.age,e.a.city,e.a.phone,e.a.pin,e.salary);
	read(&e);
	getch();
}
void display(struct employee b)
{
	printf("\n name = %s age = %d Salary = %f", b.name, b.age, b.salary);
	printf("\n City = %s Phone =%s Pin =%ld\n", b.a.city, b.a.phone, b.a.pin);
}
void print(char *n, int a, char *c, char *p,long int pin, float s)
{
	printf("\n name = %s age = %d Salary = %f", n, a, s);
	printf("\n City = %s Phone =%s Pin =%ld\n", c, p,pin);
}
void read( struct employee *em)
{
	printf("\n name = %s age = %d Salary = %f", em->name, em->age, em->salary);
	printf("\n City = %s Phone =%s Pin =%ld\n", em->a.city, em->a.phone, em->a.pin);

}
/* Operator ->is called an arrow operator, left side of this operator,
there must always be a pointer to a structure */
/* dot operator requires a structure variable on its left  */