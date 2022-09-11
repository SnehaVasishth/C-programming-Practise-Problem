/* Function Returning Pointers:this program shows how a pointer can be returned from a function.
	Second printf() would not print 20. This is because,when the control comes back from Fuction(),
	i dies.	So even if we have its address in p we can not access i
	since it is already dead. If you want to survive, we have to
	declare i as static */
#
#include<stdio.h>

int * Function()
{
   static int i=20;
	return (&i);
}

void main()
{
	int *p;
	clrscr();
	p = Function();
	printf("It print address of i: %u\n",p);
	printf("\nValue of i is not printed: %d",*p);
	getch();
}
