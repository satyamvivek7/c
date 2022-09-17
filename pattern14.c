#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=8;
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
        for(j=i;j>=1;j--)
        {
            printf(" * ");
        }
        k=k-2;
        printf("\n");
    }
}