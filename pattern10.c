#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,s=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {  
            s++;
        printf("%d ",s);
        }
    printf("\n");     
    }
}