#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=9;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
        for(j=1;j<=k;j++)
        {
            printf(" * ");
        }
        k=k-2;
        printf("\n");
    }
}