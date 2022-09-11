#include<stdio.h>
#include<conio.h>
void lsearch(int a[],int j,int h);
void main()
   {
   int arr[100],n,p,i;
   clrscr();
   printf("\n Enter the number of elements :");
   scanf("%d",&n);
   printf("\n Enter the elements :");
   for(i=0;i<n;i++);
   scanf("%d",&arr[i]);
   printf("\n Enter the element to be searched :");
   scanf("%d",&p);
   lsearch(arr,n,p);
   getch();
   }
void lsearch(int a[],int j,int h)
   {
   int k;
   for(k=0;k<j;k++)
     {
     if(a[k]==h)
	printf("\n Element found at location : %d",k);
     else
	continue;
     }
   }
