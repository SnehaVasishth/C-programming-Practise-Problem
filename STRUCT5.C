/* To search for an employee in a list of employees  */
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
	struct employee e[10];
	/* Array e[0--9] are variables of struct employee type
	and thus each can accommodate an employee's details */
	int i,n,flag;
	char sname[15];
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

	for( i = 0; i < n; i++)
		printf("\n %s  %d  %f\n", e[i].name, e[i].age, e[i].salary);
	printf("Enter name of the employee to be searched\n");
	scanf("%s",sname);
	printf("\n Name of the employee to be searched: %10s\n",sname);
	/* Searching begins  */
	flag = 0;
	for(i =0; i < n; i++)
		if( strcmp( e[i].name, sname) == 0 )
		{
			flag = 1;
			break;
		}
   /* searching ends  */
   if(flag ==1)
		printf("Name is found");
   else
		printf("Name is not found");

	getch();
}