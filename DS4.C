#include<stdio.h>

void write_array(int a[], int size)
{
	int i;
	for(i=0; i < size; i++)
	{
		printf("a[%d] is:",i);
		scanf("%d",&a[i]);
	}
}

void read_array( int a[], int size)
{
	int i;
	for(i=0; i < size; i++)
	{
		 printf("%d\n", a[i]);
	}
}
void linear_search(int a[], int size)
{
   /* This algorithm find the location of the element item in linear array a.
   If search ends in success it sets location to the (index +1) of the element  */
	int item, i, flag = 0, location;
	printf("Enter number that to be serached\n");
	scanf("%d", &item);
	for(i =0; i < size;i++)
	{
		if(item == a[i])
		{
			flag = 1;
			location = i+1;
			break;
		}
	}
	if(flag ==1)
		printf("itenm is found succesfully at the location %d", location);
	else
		printf("Item is not found");
}
void binary_search(int a[], int size)
 /* Here a is a sorted( ascending) linear array. This algorithm find the location of the element item in linear array a.
   If search ends in success it sets location to the (index +1) of the
   element. Here variables beg and end to keep track of the first element
   and last element of the array to be searched, and variable mid is used
   as index of the middle element of the array under consideration  */
{
	int item, beg, end, mid, location=0;
	beg = 0;
	end = size - 1;
	mid = ( beg + end ) /2;
   printf("Enter number that to be serached\n");
   scanf ("%d", &item);
   while( ( beg <= end)  && ( a[mid] != item) )
   {
		if(item < a[mid] )
			end = mid -1;
		else
			beg = mid +1;

		mid = ( beg + end) / 2;
   }
	if(beg > end)
		printf("itenm is not  found\n");
	else if ( a[mid] == item)
	{
			location = mid +1;
			printf("Item is found successfully at the location %d", location);
	}
	else
			printf("item is not found");

}
void insertion_sort(int a[], int size)
/* This algorithm sorts the element in the ascending order.
It works the way many people sort a hand of playing cards  */
{
	int i,j,temp;
	for(i = 1; i < size; i++)
	{
		temp = a[i];
		j = i-1;
		while( j >= 0 && a[j] > temp)
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	printf(" Entered numbers in ascending order are:\n");
	read_array( a, size);
 }


void selection_sort(int a[], int size)
/* This algorithm sorts the element in the ascending order.It uses a
temporary variable temp to facilitate the exchange of two values
and variables i and j are used as loop control variable  */
{
	int i,j,temp;
	for(i =0; i < size -1; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf(" Entered numbers in ascending order are:\n");
	read_array( a, size);
 }

void main()
{
	int a[10],size, i,j,k,option;
	char choice;
	clrscr();
	printf("Enter size of A Matrix:\n");
	scanf("%d", &size);
	printf("Input A- Matrix\n");
	write_array(a, size);
	printf("Entered numbers are:\n");
	read_array(a, size);
	printf("Enter you choice for Searching and Sorting:\n");
	printf("a)\t Searching \t (1) Linear searching\n");
	printf("\t\t\t (2) Binary searching\n\n");
	printf("b)\t Sorting \t (1) Insertion sort\n");
	printf("\t\t\t (2) Selection sorting\n");
	/* used to remove any element in buffer */
	fflush(stdin);
	scanf("%c", &choice);
	switch(choice)
	{
		case 'a':
				printf("This is Searching choice and give the option for it:");
				scanf("%d", &option);
				switch(option)
				{
					case 1:
						 linear_search (a, size);
						 break;
					case 2:
						  binary_search(a, size);
						  break;
					default:
						printf(" wrong option:\n");
						break;
				}
				break;
		case 'b':
				printf("This is Sorting choice and give the option for it:");
				scanf("%d", &option);
				switch(option)
				{
					case 1:
						  insertion_sort(a, size);
						  break;
					case 2:
						  selection_sort(a, size);
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


