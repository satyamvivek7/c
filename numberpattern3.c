#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,n,f=1,s=0;
    printf("enter no=");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;  
        }
     s=s+f;
    }
    printf("sum of factorial:%d",s);
}