#include<stdio.h>
#include<string.h>
int main(){
	float l,res;
	char from[10],to[10];
	scanf("%f",&l);
	scanf("%s%s",from,to);
	if((strcmp(from,"meter")==0)&& (strcmp(to,"feet")==0))
	{
		res=l*3.280;
		printf("%.2f",res);
		
	}
	else if((strcmp(from,"kilometres")==0)&& (strcmp(to,"miles")==0))
	{
		res=l*0.621;
		printf("%.2f",res);
		
	}
	else if((strcmp(from,"feet")==0)&& (strcmp(to,"meter")==0))
	{
		res=l*0.3048;
		printf("%.2f,res");
	}
}
