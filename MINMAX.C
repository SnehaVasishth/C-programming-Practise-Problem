#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
   {
   int n,i,a,max,min;
   clrscr();
   printf("\n Enter the number of elements :");
   scanf("%d",&n);
   max=0;
   min=INT_MAX;
   printf("Enter the values :");
   for(i=0;i<n;i++)
      {
      scanf("%d",&a);
      if(a>max)
	 max=a;
      if(a<min)
	 min=a;
      }
   printf("\n maximum is : %d ",max);
   printf("\n minimum is : %d ",min);
   getch();
   }