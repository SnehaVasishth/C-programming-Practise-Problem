//purpose: function for string copy and string lenght
#include<stdio.h>
#include<string.h>
void main()
{

char a[30], b[30], c[20];
int i=0, flag=0, count=0;
printf("enter the line\n");
scanf("%[^\n]", a);
printf("\n %s\n", a);
while(a[i]!='\0')
{
b[i]= a[i];
i++;
}
printf("%s\n", b);

/*while(city!='\0'&& mycity!='\0')
{
    if(city[i]==mycity[i])
     {
         i++;

     }
     else
     {
     flag=1;
     printf("\n mycity is not equal to city\n");
     break;
     }

}
if(flag==0)
     printf("\n mycity is  equal to city\n");*/
i=0;
     while(a[i]!='\0')
        i++;

     printf("Length= %d",i);

getch();
}
