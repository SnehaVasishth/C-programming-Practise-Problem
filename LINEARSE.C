#include <stdio.h>
#include<conio.h>
void main()
{
int i,j,A[10], B[10]={0},m,n, found=0, key, count=0;
clrscr();
printf("enter the size of A & B Arrays\n");
scanf("%d", &m);
scanf("%d", &n);
printf("enter the values of  A Arrays\n");
for(i=0; i<m; i++)
scanf("%d", &A[i]);
/*printf("enter the values of  B Arrays\n");
for(j=0; j<n; j++)
scanf("%d", &B[j]);*/
printf("Entered values in A array\n");
for(i=0; i < m; i++)
printf("%d",A[i]);
/*printf("Entered values in B array\n");
for(j=0; j < n; j++)
printf("%d",B[j])*/

printf("Enter searching Key\n");
scanf("%d", &key);

for(i=0; i<m; i++)
{
if(key == A[i])
{
	B[i]= 1;
	printf("\n A[%d]is equal to %d\n",i, key);
	count++;
}
else
	B[i]= 0;
}
for(i = 0; i < m; i++)
printf("%d\t", B[i]);
for(i=0; i <m; i++)
{
	if(B[i]==1)
	{
		found=1;
		break;
	}
}
printf("\nthe value of found is %d\n", found);
if(found==0)
printf("there is no %d in the array A[5]", key);
printf("\nthe number of times %d is present in array is %d", key ,count);
getch();
}

