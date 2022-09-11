#include <stdio.h>
#include<conio.h>

float avg(int b[10],int n);

void main()
{
int my[12], n,i;
float  average;
printf("enter  size of array\n");
scanf("%d", &n);
printf("enter values in array\n");

for(i=0;i<n;i++)

scanf("%d",&my[i]);

for(i = 0;i < n;i++)

printf("%d\t", my[i]);

average = avg(my,n);
printf("Average is %f", average);
getch();
}

float avg(int b[10], int n)
{
int sum = 0, i;
for(i =0;i < n;i++)
	sum = sum+ b[i];
return((float)(sum)/n);
}

