#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(j==1||i==1||(i==3&&j==3)||(i==3&&j==4)||(i==3&&j==5)||(i==4&&j==3)||
        (i==4&&j==5)||(i==5&&j==1)||(i==5&&j==3)||(i==5&&j==2)||(i==5&&j==5))
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