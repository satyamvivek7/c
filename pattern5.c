#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
    
}