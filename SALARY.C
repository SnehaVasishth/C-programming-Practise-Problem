#include <stdio.h>
#include<math.h>
void main()
{
float total_salary, allowance, rent, gross_salary;
printf("total salary\n");
scanf("%f",&total_salary);
allowance=total_salary*40/100;
printf("allowance%f\n", allowance);
rent=total_salary*20/100;
printf("home rent%f\n", rent);
gross_salary=total_salary-allowance-rent;
printf("print net balance%f\n", gross_salary);
getch();
}
