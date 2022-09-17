#include<stdio.h>
#include<conio.h>
void main()
{
    int p,n,s=0,g,a,i=0;
    /*printf("enter the number of value you want to enter=");
    scanf("%d",&n);*/
    g=5;
    while(i<5)
    {
        printf("enter no=");
        scanf("%d",&p);
        s=s+p;
        
        i++;
    }
    a=s/g;
    printf("sum of inputed %d element=%d and ave=%d",g,s,a);
}