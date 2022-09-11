// purpose: to search a key in array
// user will tell what she wants to seach from array
#include<stdio.h>
void main()
{
int a[10],i,n, flag=0, key;
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
printf("\n enter the key you want to search in aray\n");
scanf("%d", &key);

for(i=0;i<n; i++)
{
if(a[i]== key)  //searching for key in array
{
flag=1;
break;
}
}
if(flag==0)
printf("Key not found\n");
else
printf("Key found\n");
}
