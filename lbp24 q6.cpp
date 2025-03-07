#include<stdio.h>
int main()
{
		int n,d,r,count=0;
	printf("enter n and d");
	scanf("%d%d",&n,&d);
	while(n!=0)
	{
		r=n%10;
		if(r==d)
		count++;
		n=n/10;
		
	}
	printf("%d",count);
}
