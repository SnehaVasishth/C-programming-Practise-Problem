// purpose: print my name using array
#include<stdio.h>
void main()
{
char name[10],i;
printf("Enter the name to disply\n");
for(i=0; i<10; i++) // either i<5 or i<6 retuning the same result , no null character is printed
scanf("%c", &name[i]); //to enter my name from keybord
for(i=0; i<10; i++)
printf("%c\t", name[i]); //to display my name on screen
}
// i<10,i have to enter 10 times enter, as i have taken the size of 10
// storing 4 null characters at the end
// in such cases also, null character nver get printed
