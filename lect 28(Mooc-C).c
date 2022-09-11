//Purpose: Calculate avearge of 5 marks and max , min of 5 num entered in array.

#include<stdio.h>
void main()
{
int m[10],min, max, n, i, sum=0;
float avg;
printf("Enter th no. of elements you want in array\n ");
scanf("%d", &n);
printf("Enter the values in array\n");

for(i=0;i<n; i++)
{
scanf("%d",&m[i]);   // Entering value in array
}
for(i=0;i<n; i++)
{
printf("%d\t",m[i]);  // displaying elements of array

}
min= max= m[0];
for(i=0; i<n; i++)
{
if(m[i]< min         // Calculating max, min out of 5 numbers entered in array
min = m[i];
else if(m[i]>max)
max= m[i];

}
printf("\nMaximum value= %d\n minimum value= %d\n", max, min);
for(i=0;i<n; i++)
{
if(m[i]==max)
{
printf("m[%d]= %d\n", i, max); // index at which max number is lying
break;
}
}
for(i=0;i<n; i++)
{

if(m[i]== min)
{
printf("m[%d]= %d\n",i, min);  // index at which min number is lying
break;
}
}
for(i=0;i<n; i++)
{
sum= sum+ m[i];      // sum of all elements entered in array

}
avg= (float)sum/n;
printf("Average= %f\n", avg);  // displaying average of the array

}
