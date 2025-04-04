#include<stdio.h> 
#include<string.h>
int main()
{
	char month[10];
	int day;
	scanf("%s",&month);
	scanf("%d",&day);
	if(strcmp(month,"july")==0&&day==5)
		printf("1");
	else
		printf("0");
	return 0;
}