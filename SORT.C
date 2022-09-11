#include<stdio.h>
#include<conio.h>
void b_sort()
   {
   int a[100],temp,i,j,n;
   clrscr();
   printf("\n Enter the number of elements :");
   scanf("%d",&n);
   printf("\n Enter the elements :");
   for(i=0;i<n;i++)
      {
      for(j=0;j<n-1;j++)
	 {
	 if(a[j]>a[j+1])
	    {
	    temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
	    }
	 }
      }
   printf("\n Sorted array is :");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
   }
void s_sort()
   {
   int n,i,j,temp,a[10],small,pos;
   clrscr();
   printf("\n Enter no. of elements :");
   scanf("%d",&n);
   printf("\n Enter the elements :");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
	{
	small=a[i];
	pos=i;
	for(j=i+1;j<n;j++)
	   {
	   if(a[j]<small)
	     {
	     small=a[j];
	     pos=j;
	     }
	   }
	temp=a[i];
	a[i]=a[pos];
	a[pos]=temp;
	}
   printf("\n Elements in sorted order are :");
   for(i=0;i<n;i++)
     printf(" %d",a[i]);
   }
void i_sort()
   {
   int a[100],n,i,j,val;
   clrscr();
   printf("\n Enter the number of elements :");
   scanf("%d",&n);
   printf("\n Enter the elements :");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
     {
     val=a[i];
     j=i-1;
     while(a[j]>val && j>=0)
	{
	a[j+1]=a[j];
	j--;
	}
     a[j+1]=val;
     }
   printf("\n Sorted array is :");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
   getch();
  }
void main()
  {
  int ch;
  clrscr();
  do
    {
    clrscr();
    printf("\n 1. Bubble sort");
    printf("\n 2. Selection sort");
    printf("\n 3. Insertion sort");
    printf("\n 4. Exit");
    printf("\n enter your choice :");
    scanf("%d",&ch);
    switch(ch)
       {
       case 1 : b_sort();
		break;
       case 2 : s_sort();
		break;
       case 3 : i_sort();
		break;
       case 4 : break;
       }
    }while(ch!=4);
  getch();
  }


