#include<stdio.h>
#include<conio.h>
#include<process.h>
void add(int a[3][3],int b[3][3],int m,int n);
void sub(int a[3][3],int b[3][3],int m,int n);
void mul(int a[3][3],int b[3][3],int m,int n);
void transpose(int a[3][3],int m,int n);
void main()
   {
   int i,j,m,n,opt;
   int a[3][3],b[3][3];
   clrscr();
   printf("\n 1. Addition ");
   printf("\n 2. Subtraction ");
   printf("\n 3. Multiplication ");
   printf("\n 4. Transpose ");
   printf("\n Enter your choice :");
   scanf("%d",&opt);
   switch(opt)
      {
      case 1 : printf("\n Enter the number of rows:");
	       scanf("%d",&m);
	       printf("\n Enter the number of columns:");
	       scanf("%d",&n);
	       printf("\n Enter matrix 1 :");
	       for(i=0;i<m;i++)
		  {
		  for(j=0;j<n;j++)
		      {
		      printf("\n Enter [%d][%d]:",i,j);
		      scanf("%d",&a[i][j]);
		      }
		  }
	       printf("\n Enter matrix 2 :");
	       for(i=0;i<m;i++)
		   {
		   for(j=0;j<n;j++)
		      {
		      printf("\n Enter [%d][%d]:",i,j);
		      scanf("%d",&b[i][j]);
		      }
		   }
	       add(a,b,m,n);
	       break;
      case 2 : printf("\n Enter the number of rows:");
	       scanf("%d",&m);
	       printf("\n Enter the number of columns:");
	       scanf("%d",&n);
	       printf("\n Enter matrix 1 :");
	       for(i=0;i<m;i++)
		  {
		  for(j=0;j<n;j++)
		     {
		     printf("\n Enter [%d][%d]:",i,j);
		     scanf("%d",&a[i][j]);
		     }
		  }
	       printf("\n Enter matrix 2 :");
	       for(i=0;i<m;i++)
		  {
		  for(j=0;j<n;j++)
		     {
		     printf("\n Enter [%d][%d]:",i,j);
		     scanf("%d",&b[i][j]);
		     }
		  }
	       sub(a,b,m,n);
	       break;
      case 3 : printf("\n Enter the number of rows:");
	       scanf("%d",&m);
	       printf("\n Enter the number of columns:");
	       scanf("%d",&n);
	       printf("\n Enter matrix 1 :");
	       for(i=0;i<m;i++)
		  {
		  for(j=0;j<n;j++)
		     {
		     printf("\n Enter [%d][%d]:",i,j);
		     scanf("%d",&a[i][j]);
		     }
		  }
	       printf("\n Enter matrix 2 :");
	       for(i=0;i<m;i++)
		   {
		   for(j=0;j<n;j++)
		       {
		       printf("\n Enter [%d][%d]:",i,j);
		       scanf("%d",&b[i][j]);
		       }
		   }
	       mul(a,b,m,n);
	       break;
      case 4 : printf("\n Enter the number of rows:");
	       scanf("%d",&m);
	       printf("\n Enter the number of columns:");
	       scanf("%d",&n);
	       printf("\n Enter matrix 1 :");
	       for(i=0;i<m;i++)
		  {
		  for(j=0;j<n;j++)
		     {
		     printf("\n Enter [%d][%d]:",i,j);
		     scanf("%d",&a[i][j]);
		     }
		  }
	       transpose(a,m,n);
	       break;
      default : exit(0);
		break;
      }
   getch();
   }

void add(int a[3][3],int b[3][3],int m,int n)
   {
   int c[3][3],i,j;
   for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
	  c[i][j]=a[i][j]+b[i][j];
      }
   printf("\n Matrix 1 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",a[i][j]);
      }
   printf("\n Matrix 2 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",b[i][j]);
      }
   printf("\n addition of matrix 1 and 2 is :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
      printf("\t%d",c[i][j]);
      }
   }
void sub(int a[3][3],int b[3][3],int m,int n)
   {
   int c[3][3],i,j;
   for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
	  c[i][j]=a[i][j]-b[i][j];
      }
   printf("\n Matrix 1 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",a[i][j]);
      }
   printf("\n Matrix 2 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",b[i][j]);
      }
   printf("\n subtraction of matrix 1 and 2 is :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
      printf("\t%d",c[i][j]);
      }
   }
void mul(int a[3][3],int b[3][3],int m,int n)
   {
   int c[3][3],i,j,k;
   for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
	 {
	 c[i][j]=0;
	 for(k=0;k<m;k++)
	     c[i][j]+=(a[i][k]*b[k][j]);
	 }
      }
   printf("\n Matrix 1 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",a[i][j]);
      }
   printf("\n Matrix 2 :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",b[i][j]);
      }
   printf("\n Multiplication of matrix is :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 {
	 printf("\t%d",c[i][j]);
	 }
      }
   }
void transpose(int a[3][3],int m,int n)
   {
   int i,j,t;
   printf("\n Entered matrix is :");
   for(i=0;i<m;i++)
      {
      printf("\n");
      for(j=0;j<n;j++)
	 printf("\t%d",a[i][j]);
      }
   printf("\n Transpose of a matrix is :");
   for(i=0;i<n;i++)
      {
      printf("\n");
      for(j=0;j<m;j++)
	 printf("\t%d",a[j][i]);
      }
   }
                                                        