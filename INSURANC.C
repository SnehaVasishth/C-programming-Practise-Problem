#include <stdio.h>
void main()

{
int age ;
char ms, gender;
printf(" enter ms, gender, age\n");
scanf("%c%c%d",&ms,&gender,&age);
if(ms=="married")
	printf("insured");
else
{
	if(ms=="not married"&& gender=="female")
	}
		if(age>25)
			printf("insured");
		else
			printf("not insured");
	}
	else
	{
		if(gender=="male" && age>30)
			printf("insured");
		else
			printf("not insured");
	}
}
getch();
}



