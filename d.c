#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(j==2||j==5||i==1||i==5)
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