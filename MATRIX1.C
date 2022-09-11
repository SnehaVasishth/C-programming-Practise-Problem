#include<stdio.h>
void write_array( int a[], int size)
{
	int i;
	for(i=0; i < size i++)
	{
		printf("a[%d] is:",i);
		scanf("%d",&a[i]);
	}
}

void read_array( int a[], int size)
{
	int i;
	printf("Entered numbers are :\n");
	for(i=0; i < size; i++)
	{
		 printf("%d\n", a[i]);
	}
}
void main()
{
	int a[10],size, i,j,k,loc=0,flag=0, option;
	char choice;
	clrscr();
	printf("Enter size od A Matrix:\n");
	scanf("%d", &size);
	printf("Input A- Matrix\n");
	read_matrix(a,size);
	write_matrix(a,size);
	printf("Enter you choice for Searching and Sorting and option :\n");
	printf("a)\t Searching \t (1) Linear searching\n");
	printf("\t\t\t (2)Binary searching\n");
	printf("b)\t Sorting \t (1) Insertion sort\n");
	printf("\t\t\t (2) Selection sorting\n");
	scanf("%c", &choice);
	switch(choice)
	{
		case 'a':
				printf("This is Searching choice and give the option for it:\n");
				scanf("%d", &option);
				switch(choice)
				{
					case 1:
						 break;
					case 2:
						  break;
					default:
						printf(" wrong option:\n");
						break;
				}
				break;
		case 'b':
				printf("This is Sorting choice and give the option for it:\n");
				scanf("%d", &option);
				switch(choice)
				{
					case 1:
						  break;
					case 2:
						  break;
					default:
						printf(" wrong option:\n");
						break;
				}
				break;
				default:
				printf(" wrong option:\n");
				break;
	 }
	getch();
}
