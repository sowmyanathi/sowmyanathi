#include<stdio.h>
int main()
{ 
  float r,h,v;
  printf("enter the value of r and h:");
  scanf("%f%f",&r,&h);
  v=3.14*r*r*h;
  printf("the value of cylinder is:%f",v);
  return 0;
}
