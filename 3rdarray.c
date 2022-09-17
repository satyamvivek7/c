#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],c[100],i,j;
    printf("enter 5 element of array=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {   
     printf("%d \t",a[i]);
    }
    printf("\nenter 5 element of array=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {   
     printf("%d \t",b[i]);
    }
    printf("\n 1st enterd array=\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
        printf("%d\t",c[i]);
    }
    printf(" \n 2nd enterd array=\n");
    for(i=5;i<10;i++)
    {
        c[i]=b[i];
        printf("%d\t",c[i]);

    }
    printf("\n final array is=\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }
}