#include<stdio.h>
#include<math.h>
int main()
{
	
 int a,b,c,root1,root2;
 scanf("%d%d%d",&a,&b,&c);
 root1=(-b+sqrt(b*b-4*a*c))/2*a;
 root2=(-b-sqrt(b*b-4*a*c))/2*a;
 scanf("%d%d",root1,root2);
 return 0;
}
