#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*0.5555;
	printf("%0.2f",celsius);
	return 0;
}
