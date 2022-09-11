#include<stdio.h>
#include<string.h>
void main()
{

char a[30], b[30], c[20];
int i=0, n;
printf("enter the line\n");
scanf("%[^\n]", a);
printf("\n %s\n", a);
printf("enter the line\n");
scanf("%[^\n]", b);
printf("\n %s\n", b);
while(a[i]!='\0')  // calculating the lenght of the string
        i++;
printf("Length= %d",i);
n=i;
while(b[i]!='\0')
{
a[n+1+i]= b[i];
i++;
}
printf("%s", a);
getch();
}
