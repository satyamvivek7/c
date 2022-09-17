#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("enter the no=");
    scanf("%d",&n);
    for(i=1,j=1;i<=n,j<=n+(n-1);i++,j=j+2)
    {
    printf("\t%d/%d,",i,j);
    }
}