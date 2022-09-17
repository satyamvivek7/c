#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,r=1;
   printf("enter no=");
   scanf("%d",&n);
   while(n>0)
   {
       r=r*n;
       n--;
   }
printf("%d",r);
}