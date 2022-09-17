#include<stdio.h>
int arithmetic(int,int);
int main()
{
    return !arithmetic(11,9);
}
int arithmetic(num1,num2)
{
    return(printf("%d",(++num1*--num2)));
}