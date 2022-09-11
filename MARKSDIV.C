#include <stdio.h>
void main()
{
int m1,m2,m3,m4,m5,per;
printf("enter marks in 5 subjects\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if(per>=60)
	printf("first division\n");
if(per >= 50 && per < 60)
	printf("second division \n");
if(per >= 40 && per < 50)
	printf("third division\n");
if(per < 40)
	printf("fail\n");
getch();
}
