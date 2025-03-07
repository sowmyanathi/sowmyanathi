#include<stdio.h>
#include<math.h>
int main()
{ 
   int a,b,c;
   printf("enter a,b values:");
   scanf("%d%d",&a,&b);
   c=sqrt(a*a+b*b);
   printf("the value of hypotenuse is:%d",c);
   return 0;
}
