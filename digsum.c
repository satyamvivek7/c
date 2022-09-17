#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f=1;
    printf("enter number");
    scanf("%d",&n);
    ab:
    if(n>0)
    {
    f=f*n;
    n--;
    goto ab;
    }
    printf("factorial=%d",f);
}
