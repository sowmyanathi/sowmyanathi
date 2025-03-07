#include<stdio.h>
int main()
{ 
    float l,b,p;
    printf("enter the values of l,b:");
    scanf("%f%f",&l,&b);
    p=2*(l+b);
    printf("the perimeter of rectangle is:%f",p);
    return 0;
}
