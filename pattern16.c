#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf(" * ");
        }
        for(j=1;j<=(2*i)-2;j++)
        {
            printf("   ");
        }
        for(j=1;j<=6-i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

     for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        for(j=1;j<=k;j++)
        {
            printf("   ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
         k=k-2;
        printf("\n");
    }
   
}