/* To sort a list of employees in the increasing order of salary  */
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
	struct employee e[10],tempe;
	/* Array e[0--9] are variables of struct employee type
	and thus each can accommodate an employee's details */
	int i,n,j;
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

	printf("\n Unsorted list of Employees' details \n");
	for( i = 0; i < n; i++)
		printf("\n %s  %d  %5f\n", e[i].name, e[i].age, e[i].salary);

	/* Sorting begins  */

	for(i = 0; i < n-1; i++)
		for(j = i+1; j < n; j++)
		{
			if( e[i].salary > e[j].salary)
			{
				tempe = e[i];
				e[i] = e[j];
				e[j] = tempe;
			}
		}

   /* searching ends  */
   printf("\n sorted list of Employees \n");
	for( i = 0; i < n; i++)
		printf("\n %12s  %4d  %8.2f\n", e[i].name, e[i].age, e[i].salary);


	getch();
}