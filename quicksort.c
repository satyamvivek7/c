#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],sn,b[100],c[100],l,m,h,i;
    printf("enter 10 element of array=");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {   
     printf("%d \t",a[i]);
    }
    printf("\n enter the searching no=");
    scanf("%d",&sn);
    if(sn==a[i])
    {
      h=i;
      l=0;
    }
while(l<h)
{
    m=(l+h)/2;
    if(sn==a[m])
   else if (sn>a[m])//store it into another array b[]
    {
    b[i]=a[m];
    printf("smallest part of arry is=\n");
    for(i=0;i<10;i++)
     {
    printf("%d",b[i]);
    }
    l=m+1;
    }
     else if(sn<a[m])//store it into another array c[]
    { 
         c[i]=a[m];
       printf("gratest part of arry is=\n");
         for(i=0;i<10;i++)
        {
            printf("%d",c[i]);
        }
        h=m-1;
    }

}
}