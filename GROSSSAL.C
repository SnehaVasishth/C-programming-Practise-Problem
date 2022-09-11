#include <stdio.h>
#include<math.h>
void main()
{
float hra, da, gross, basic1;
printf("Enter basic\n");
scanf("%f", &basic1);
if (basic1 < 1500)
{
	da = basic1 *10/100;
	hra = basic1*90/100;
}
else
{
	da =  basic1*98/100;
	hra = 500;
}
printf("%f is da \n", da);
printf("%f is  hra \n",hra);
gross=basic1+hra+da;
printf("print: %f gross salary\n",gross);
getch();
}

