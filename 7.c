#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(j==5||i==1)
        {
        printf(" * ");
        }
        else
        {
        printf("   ");
        }
        }
         printf("\n");
    }
}