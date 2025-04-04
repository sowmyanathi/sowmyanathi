 #include<stdio.h>
int main()
{
	int s;
	printf("enter no. of groups ");
	scanf("%d",&s);
	if(s>80 && s<=100)
	printf("a grade");
	else if(s>60 && s<=80)
	printf("b grade");
	else if(s>50 && s<=60 )
	printf("c grade");
	else if(s>30 && s<=50)
	printf("d grade");
	return 0;
	
	
}
