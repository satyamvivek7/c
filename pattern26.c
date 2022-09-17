#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=6-i;j>=5;j--)
        {

            printf("%d",j);
        }
        printf("\n");
    }
    
}