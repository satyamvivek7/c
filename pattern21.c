#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=5-i;j<=4;j++)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
    
        for(k=5-i;k>=1;k--)
        {
            printf("%d",k);
        }
      
        printf("\n");

    }

}