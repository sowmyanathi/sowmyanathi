#include<stdio.h>
int main()
{
	float m,v,ke;
	printf("enter mass:");
	scanf("%f",&m);
	printf("enter velocity:");
	scanf("%f",&v);
	ke=(0.5)*m*v*v;
	printf("kinetic energy=%f",ke);
	return 1;
}