#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char name[20];
	int i,n;
	fp = fopen("names.dat", "r");
	printf("Enter the No. of names\n");
	scanf("%d", &n);;
	printf("Enter %d names\n",n);
	fflush(stdin);
	for(i =1; i <=n;i++)
	{
		gets(name);
		fputs(name,fp);
		printf("\n");
	}
	fclose(fp);
	getch();

}