/* To find the number of occurrence of a character in a string. */
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[20],ch;
	int i, count = 0;
	clrscr();
	printf("Enter a string:  ");
	gets(str); 	/* scanf("%s", str); */
	fflush(stdin);
	printf("\n Enter a character : ");
	ch = getchar();   	/*  scanf("%c",ch); */
	for(i =0; str[i] != '\0'; i++)
		if(str[i] == ch)
			count++;
	printf("No. of occurrences of %c in %s is %d",ch, str,count);
	getch();
}