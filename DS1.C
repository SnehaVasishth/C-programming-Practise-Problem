#include<stdio.h>
#include<conio.h>

void Hanoi(unsigned int, char, char, char);

void main()
{
	unsigned int n;
	char beg = 'A', aux = 'B', end ='C';
	clrscr();
	printf("Enter number of disks:\n");
	scanf("%u", &n);
	printf("\n\nTower of Hanoi problem with %u disks\n\n\n", n);
	Hanoi(n,beg,aux,end);
	getch();
}

void Hanoi(unsigned int n, char beg, char aux, char end)
{
	if( n!= 0)
	{
		Hanoi( n-1,beg,end,aux);
		printf("Move disk %u from %c to %c\n", n,beg,end);
		Hanoi( n-1, aux,beg,end);
	}
		   }