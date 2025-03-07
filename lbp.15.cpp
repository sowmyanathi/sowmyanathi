 #include<stdio.h>
 #include<math.h>
 int main()
 { 
   int r,volume,pi;
   float h;
   printf("enter r value:");
   scanf("%d",&r);
   printf("enter h value:");
   scanf("%f",&h);
   volume=0.333*pi*r*r*h;
   printf("volume=%d",volume);
   return 1;
 }
 
