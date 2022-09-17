//wap to enter 10 element of array &split the array from middle position.and sort the both split array using any sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],temp,b[100],c[100],l,m,h,i,j;
    printf("enter 10 element of array=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {   
     printf("%d \t",a[i]);
    }
    h=10;
    l=0;
    m=(h+l)/2;
    printf("\n before sorting 1st half part of array.....\n");
    for(i=0;i<m;i++)
    {
    b[i]=a[i];
    printf("%d \t",b[i]);
    }
    for(i=0;i<m;i++)
     {
    for(j=i+1;j<m;j++)
    {
        if(b[i]>b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
        }
    }
     }
    printf("\n after sorting 1st half part of array.....\n");
    for(i=0;i<m;i++)
    {
    printf("%d\t",b[i]);
    }
    printf("\n before sorting 2nd part of array.....\n");
    for(i=m;i<10;i++)
    {
        c[i]=a[i];
        printf("%d \t",c[i]);
        
    } 
     for(i=m;i<10;i++)
     {
    for(j=i+1;j<10;j++)
    {
        if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
     }
    printf("\n after sorting 2nd part of array.....\n");
    for(i=m;i<10;i++)
    {
    printf("%d \t",c[i]);
    }
}
