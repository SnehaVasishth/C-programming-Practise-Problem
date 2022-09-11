#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char c;
	printf("The contents of the file 'text' are:\n");
	fp = fopen("LSEARCH.C", "r");
	while( !feof(fp))
	{
		c = fgetc(fp);
		putchar(c);
	}
	fclose(fp);
	getch();

}