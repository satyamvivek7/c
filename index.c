#include<stdio.h>
  void main()
{
    int a[10],i,sr,c=0;
    printf("Enter the elements of Array = ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Array elements is \n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the searching no \n =  ");
    scanf("%d",&sr);
    for(i=0;i<10;i++)
    {
        if(a[i]==sr)
        {
           printf("index=%d",i) ;        
            c++;
        }
    }
    if(c==0)
    {
        printf("\nNot Found");
    }
    else
    {
        printf("\nFound");
    }
}