 #include<stdio.h>
 int main(void)
 {
   int t;
   printf("enter temperature value");
   scanf("%d",&t);
   if(t>0)
   printf("freezing");
   if(t>0 && t<=20)
   printf("cold");
   if(t>21 && t<=30)
   printf("moderate");
   if(t>30)
   printf("hot");
   printf("temperature is :%d",t);
   return 0;	
 }