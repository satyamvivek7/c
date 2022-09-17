#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k=5,l=5,m=19;
    for(i=2;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
          for(j=1;j<=l;j++)
        {
            printf(" ");
        }
          for(j=1;j<=k;j++)
        {
            printf("*");
        }
        k=k+2;
        l=l-2;
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
       for(j=1;j<=m;j++)
        {
            printf("*");
        }
        m=m-2;
        printf("\n");
    }
}

