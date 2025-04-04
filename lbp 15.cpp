#include<stdio.h>
int main()
{
  const float pi=3.14;
  float r,h,v;
  scanf("%f",&r);
  scanf("%f",&h);
  v=(0.3)*pi*r*r*h;
  printf("%0.2f",v);
  return 0;
}