#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=65;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        {
        if(j==1||j==7||i==1||i==6)
        {
        printf("%c",k);
        k++;
        }
        else
        {
        printf(" ");
        }
        }
        printf("\n");
    }
}