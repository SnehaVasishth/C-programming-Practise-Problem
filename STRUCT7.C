/* To create a list of student's details
and display their percentage marks */

#include<stdio.h>
#include<string.h>

struct student
{
	int reg_no;
	char name[20];
	int marks[5];
	int total;
	float percent;
};

void main()
{
	struct student s[10];
	/* Array s[0--9] are variables of struct student type
	and thus each can accommodate a student's details */
	int i,n,j;
	float f,*fp;
	fp = &f;
	/* The above two statements are used to eliminate linker error
	"Floating point formats are not linked, Abnormal Program termination" */
	clrscr();
	printf("Enter no. of students [1 - 10]\n");
	scanf("%d", &n);
	printf("\nEnter %d students  details\n",n);
	for(i =0; i <n; i++)
	{
		printf("\nEnter reg_no and name of student-%d:\n", i+1);
		scanf("%d%s", &s[i].reg_no, &s[i].name);
		printf("Enter marks in five subject of %s\n", s[i].name);
		for(j = 0; j < 5; j++)
			scanf("%d", &s[i].marks[j]);
	}
	/* Find the total and percentage begins  */
	for( i = 0; i < n; i++)
	{
		s[i].total = 0;
		for(j = 0; j < 5; j++)
			s[i].total  += s[i].marks[j];
		s[i].percent = (float) s[i].total / 5;
	}
	/* Find the total and percentage ends   */
	printf("\n\n  Reg-No     Name     Percentage \n");
	for(i = 0; i < n; i++)
		printf("\n %6d %15s %7.2f\n", s[i].reg_no, s[i].name, s[i].percent);
	getch();
}