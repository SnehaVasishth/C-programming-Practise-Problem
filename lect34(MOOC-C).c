// purpodse: to count the number of tims key occuring in array

#include<stdio.h>
void main()
{
int a[10],count=0,i,n, flag=0, key;
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
printf("\n enter the key you are searching in aray\n");
scanf("%d", &key);
for(i=0; i<n; i++)
{
if(a[i]==key)
{
flag=1;
count++;
}
}
if(flag==0)
printf("Key not found\n");
else
printf("no. of times key occur = %d\n", count);
}
