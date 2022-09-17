#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(i==5||i==1||i==3||(i==2&&j==5)||(i==4&&j==1))
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