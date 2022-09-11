#include<stdio.h>
#include<conio.h>

void main()
{
	char name[] = "Rajkumar";
	char *ptr;
	clrscr();
	puts(name);
	ptr = name;
	while( *ptr !='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	getch();

}