/* enter your name and display the same using gets() and puts() functions. */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[60];
	clrscr();
	printf("Enter your name:  ");
	gets(name);
       //	scanf("%s",name);
      //	printf("\n My name is : ");
      // printf("%s",name);
     // puts("my name is:", "Hii");
		puts(name);
	getch();
}