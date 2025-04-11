#include<stdio.h>
int main(){
	int a,b,n,term,i;
	printf("enter the no; of terms");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=0;i<n;i++)
	{
		printf("%d",a);
		term=a+b;
		a=b;
		b=term;
	}
}