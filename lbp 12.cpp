#include<stdio.h>
int main()
{
	float om,tm,per;
	printf("enter total marls");
	scanf("%f",&tm);
	printf("enter obtained marks");
	scanf("%f",&om);
	if(om<=tm)
	{
		per=om/tm*100;
		printf("percentage=%f",per);
		return 1;
	}
}