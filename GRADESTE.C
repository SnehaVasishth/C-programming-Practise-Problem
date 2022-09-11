#include <stdio.h>
#include<conio.h>
void main()
{
float hardness, carbon_content, tensile;
printf("Enter values hardness, carbon_content,tensile\n")
scanf("%f%f%f", &hardness,&carbon_content,&tensile);

if(hardness>50 && carbon_content<0.7 && tensile>5600)
	printf("grade 10\n");

else if(hardness>50 && carbon_content<0.7)
	printf("grade 9\n");

else if(carbon_content<0.7 && tensile>5600)
	printf("grade 8\n");

else if(hardness>50 && tensile>5600)
	printf("grade 7\n");
else if(hardness>50 || carbon_content<0.7 || tensile>5600)
	printf("grade 6\n");
else
	printf("grade 5\n");
getch();
}



