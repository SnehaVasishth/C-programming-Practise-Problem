/* enter your name and encrypt and decrypt it. */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[60],i;
	clrscr();
	printf("Enter your name:  ");
	gets(name);
	printf("\n My name is : ");
	puts(name);
	for(i =0; name[i] != '\0'; i++)
	name[i] = name[i] + 5;
	printf("Encrypted name : %s\n", name);
	/* puts(name); */
	for(i =0; name[i] != '\0'; i++)
	name[i] = name[i] - 5;
	printf("Decrypted name  : %s\n", name);
	/* puts(name); */


	getch();
}