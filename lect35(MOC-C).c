//Purpose: to check wheather there is an even number in array

#include<stdio.h>
void main()
{
int a[10],i,n, flag=0;
printf("enter the how many elements you want in aray\n");
scanf("%d", &n);
printf("enter the  elements in aray\n");
for(i=0;i<n; i++)
{
scanf("%d", &a[i]);   // Entering value in array
}
for(i=0;i<n; i++)
{
printf("%d\t",a[i]);  // displaying elements of array

}
for(i=0; i<n; i++)
{
if(a[i]%2==0)    // checking wheather the array contains even number in array not
{
flag=1;
printf("a[%d]= %d is an even number",i, a[i] );
break;
}

}
}
