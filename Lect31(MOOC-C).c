// Copying array in to another array
#include<stdio.h>
int main()
{
int a[10];
int b[10], m, i, flag=1;
printf("enter the number of eleents you want in the array\n");
scanf("%d", &m);
printf("Enter the elements int ht original array\n");
for(i=0; i<m; i++)
{
scanf("%d", &a[i]);  //Enter the elements in array
}
for(i=0; i<m; i++)
{
printf("%d\t", a[i]);
}
printf("\n");
for(i=0; i<m; i++)
{
b[i]=a[i];
printf("%d\t", b[i]);  //copied the lements of array a to b and printer the array b
}
for(i=0;i<m ; i++)
{
    if(a[i]!=b[i])
    {
        flag=0;
        printf("array a is not equal to array b\n");
        break;

    }
}
if(flag==1)
printf("array a is  equal to array b\n");



return 0;
}
