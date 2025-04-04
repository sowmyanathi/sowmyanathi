#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	gets(a);
	if(strcmp(a,"while")==0||strcmp(a,"if")==0||strcmp(a,"for")==0)
	printf("true");
	else
	printf("false");
	return 0;
}