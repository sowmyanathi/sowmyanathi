#include<stdio.h>
int main(void)
{
  int y;
  printf("enter year value");
  scanf("%d",&y);
  if(y%4==0||y%400==0||y%100=0)
  printf("its aleap year");
  else
  printf("its not a leap year");
  return 0;
}