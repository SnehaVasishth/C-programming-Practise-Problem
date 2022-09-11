/* To accept a line of text and display it using getchar() and putchar()   */
#include<stdio.h>
#include<conio.h>
void main()
{
	char text[40], c;
	int i=0;
	printf("Enter a line of text\n\n");
	c = getchar();
	while(c != '\n')
	{
		text[i] = c;
		c = getchar();
		i++;
	}
       text[i] = '\0';
	printf("The line of text entered is \n");
	for(i =0; text[i] != '\0'; i++)
		putchar(text[i]);
	getch();
}