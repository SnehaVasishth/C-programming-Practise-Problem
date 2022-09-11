#include<stdio.h>
#include<conio.h>
void main()
{

FILE *fp;
char ch;
fp = fopen("sneha1.txt","r");
while(1)
{
	ch = fgetc(fp);
	if(ch ==EOF)
		break;
	printf("%c",ch);
}

printf("\n");
fclose(fp);
getch();
}