/* To illustrate an array of structure
   and  passing Array of Structure to function   */
#include<stdio.h>
#include<string.h>

struct employee
{
	char name[20];
	int age;
	float salary;
};

void display(struct employee [], int);

void main()
{
	struct employee e[10];
	/* Array e[0--9] are variables of struct employee type
	and thus each can accommodate an employee's details */
	int i,n;
	float f,*fp;
	fp = &f;
	/* The above two statements are used to eliminate linker error
	"Floating point formats are not linked, Abnormal Program termination" */
	clrscr();
	printf("Enter no. of employees[1 - 10]\n");
	scanf("%d", &n);
	printf("\nEnter %d employees' details\n",n);
	for(i =0; i <n; i++)
		scanf("%s%d%f", &e[i].name, &e[i].age, &e[i].salary);

	printf("\n Employees' details \n");
	display(e,n);
	getch();
}
void display(struct employee e[], int n)
{
	int i;
	for( i = 0; i < n; i++)
	printf("\n %12s  %3d  %8.2f\n", e[i].name, e[i].age, e[i].salary);
}
