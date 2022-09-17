#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j,n,s=0;
    printf("enter the no=");
    scanf("%d",&n);
   /* for(i=0;i<n;i++)
     {
     for(j=0;j<=i;j++)
       {
        printf("1");
        }
       printf("\t");
        }*/
   for(;i<=n;i++)
    {
        s=(s*10)+1;
        printf("%d \t",s);
}
}