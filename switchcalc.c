#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch;
    printf("enter two no=");
    scanf("%d%d",&a,&b);
    choice:
    printf("1.addition\n2.subtraction\n3.multiplication\n4.by\n5.remender\n");
    printf("enter your choice=");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("add of two no=%d\n",a+b);
        goto choice;
        case 2:
        printf("subt of two no=%d\n",a-b);
        goto choice;
        case 3:
        printf("multi of two no=%d\n",a*b);
        goto choice;
        case 4:
        printf("by of two no=%d\n",a/b);
        goto choice;
        case 5:
        printf("remender of two no=%d\n",a%b);
        goto choice;
        default :
        printf("wrong choice");
    }
}