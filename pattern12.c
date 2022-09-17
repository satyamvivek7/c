#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("   ");
        }
        for(k=1;k<=9-i;k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}