#include<conio.h>
#include<stdio.h>
#include<string.h>

int search(char T[20], char P[10], int n, int m )
{
	int s,j;
	for(s = 0; s <= n-m; s++)
	{
		j = 0;
		while(j <= m-1 && T[s+j] == P[j])
			j++;
		if(j > m-1)
			return s;
	}
	return 0;
}

void del(char T[], int z, int n, int m)
{
 int i;
 for(i = z; i < n; i++)
	T[i] = T[i+m];
}

void main()
{
	char T[20], P[10];
	int n,m,z,i;
	clrscr();
	printf("\nEnter the Text\n");
	gets(T);
	printf("\nEnter the Pattern that you want to Delete\n");
	gets(P);
	n =strlen(T);
	m = strlen(P);
	z = search(T,P,n,m);
	if(z)
	{
		printf("\nPattern is found in Text");
		printf("\n\nThe position of Pattern is:  %d",z+1);
		del(T,z,n,m);
		printf("\n\n\n");
		for(i=0; i < n-m; i++)
			printf("%c",T[i]);
	}
	else
		printf("\nPattern is Not Found");
	getch();
}
