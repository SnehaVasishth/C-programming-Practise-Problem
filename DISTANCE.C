#include <stdio.h>
#include<math.h>
void main()
{
float distance, dism, disinch, disfeet, discm;
printf(" the distance between two cities\n");
scanf("%f",&distance);
dism=distance*1000;
printf("distance in meter is %f meter", dism);
disinch=dism*100/2.54;
printf("distance in inches is %f inch", disinch);
disfeet=disinch/12;
printf("distance in feet is  %f feet" , disfeet);
discm=dism*100;
printf("distance in feet is %f cm", discm);
getch();
}


