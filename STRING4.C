#include<string.h>
void main()
{
	char name[] = "Rajkumar";
	int n,i;
	clrscr();
	n = strlen(name);
	printf("length = %d\n",n);
	i = 0;
	while( i <= n)
	{
		printf("%c",name[i]);
		i++;
	}
   /* 	printf("\name = %s", name); */
	getch();

}