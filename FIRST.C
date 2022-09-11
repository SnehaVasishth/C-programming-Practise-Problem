#include<stdio.h>
#include<conio.h>


void main()
{
int a[n][n];
int b[n][n];
int c[n][n];
int i,j,k,n;
printf("enter value of n");
scanf ("%d",&n);
printf("elements a");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",a[i][j]);
}}
printf("elements b");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",b[i][j]);
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0 ;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][j]*b[i][j];
}}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\n%d",c[i][j]);
}
printf("\n");
}getch();
return 0;
}
