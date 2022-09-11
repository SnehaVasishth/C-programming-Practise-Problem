

#include <stdio.h>
#include<conio.h>
void main()
{
int i,n;
float  fact=1.0,sum=0.0  ;
clrscr();
printf("series of napier's constant upto 7\n");
for(n=1;n<=7 ; n++)
{
	for(i=1;i<=n ; i++)
{
		fact= fact*i;

}
	printf("%d/%d!+\t",i-1,i-1);
	sum= sum+(n/fact);
}
printf("%f is the answer\n",sum);
getch();
}