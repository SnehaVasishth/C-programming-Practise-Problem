/*Purpse:Using if and condition and logical operator
         check the elegibility*/

#include<stdio.h>
#include<math.h>
void main()
{
float phy, chem, maths, phymaths, total;
printf("Enter the marks of physics,chemistry,maths,");
scanf("%f%f%f",&phy,&chem,&maths);
phymaths= (phy+maths);
total= (phy+chem+maths);
printf("Aggregrate marks of phy and maths=%f\n Total marks=%f\n",phymaths,total);
if((phy>40) && (chem>50)&& (aths>60)&&(( phymaths>150)|| (total>200))
{
    printf("The candidate is Eligible");
}
else
{
    printf("The candidate is Not Eligible");
}
getch();
}
