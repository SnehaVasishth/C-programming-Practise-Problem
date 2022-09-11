#include <stdio.h>
#include<conio.h>
void main()
{
int sub[5], grade[5], credit[5], i,sum_grade, sum_credit,  gpa;

for(i=0; i<5 ; i++)
{
scanf("%d%d%d", &sub[i], &grade[i], &credit[i]);
}
for(i=0; i<5 ; i++)
{printf("%d\t%d\t%d\n", sub[i], grade[i], credit[i]);

}
sum_grade= 0;
sum_credit=0;
for(i=0; i<5 ; i++)
{sum_grade= sum_grade+ grade[i]* credit[i];
sum_credit= sum_credit+ credit[i];
}
gpa=sum_grade/sum_credit;
printf("%d\t%d\t%d", sum_grade, sum_credit, gpa);
getch();
}



