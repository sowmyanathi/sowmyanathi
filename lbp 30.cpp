#include<stdio.h>
int fib(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}
int main()
{
	int n,r;
	printf("enter n value:");
	scanf("%d",&n);
	r=fib(n);
	printf("%d",r);
}


