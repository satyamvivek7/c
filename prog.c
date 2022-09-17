#include<stdio.h>
void main()
{
    int a[]={100,200,0x16};
    for(int i=0;i<3;i++)
    {
        printf("%d\t",a[i]);
    }
}