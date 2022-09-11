#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char name[20];
	int i,n;
	printf("strings are:\n");
	fp = fopen("names.dat", "r");
	printf("Enter the No. of names\n");
	while( !feof(fp))
	{
		fgets(name, 80,fp);
		puts(name);
		printf("\n");
	}
	fclose(fp);
	getch();

}