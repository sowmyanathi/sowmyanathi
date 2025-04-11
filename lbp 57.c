#include<stdio.h>
int main()
{
	int r,n,sum=0;
	printf("enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(n%2==0)
		{
			sum++;
		}
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
