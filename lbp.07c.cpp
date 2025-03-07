#include<stdio.h>
#include<math.h>
int main()
{ 
   float a,b,h,area;
   printf("enter a,b,h values:");
   scanf("%f%f%f",&a,&b,&h);
   area=(0.5*(a+b))*h;
   printf("the area of trapezium is:%f",area);
   return 0;
} 
