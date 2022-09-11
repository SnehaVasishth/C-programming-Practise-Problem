#include <stdio.h>
#include<conio.h>
void main()

{
int ram, ajay, shyam;
scanf("%d%d%d",&ram, &ajay, &shyam);
if(ram<shyam && ram<ajay)
	printf("ram is youngest\n");
if(ram>shyam && shyam<ajay)
	printf("shyam is youngest\n");
if(ajay<shyam && ram>ajay)
	printf("ajay is youngest\n");
getch();
}