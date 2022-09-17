#include<stdio.h>
void main()
{
int i,j,letter,a,b,c,d;
char m[3],n[3],q[1];
struct parts
{
int year;
char material[20];
int qty;
};
struct parts p[27]={
{1991,"rubber",5},{1992,"rubber",6},{1991,"metal",7},{1997,"wood",8},{1993,"plastic",9}
,{1992,"wood",6},{1997,"metal",6},{1992,"rubber",7},{1991,"wood",2},
{1992,"metal",6},{1995,"wood",4},{1992,"rubber",5},{1998,"wood",2},
{1997,"plastic",8},{1998,"plastic",9},{1998,"metal",8},{1991,"metal",8},
{1992,"wood",5},
{1993,"wood",8},{1993,"rubber",7},{1997,"metal",2},{1998,"wood",1},
{1999,"plastic",8},{1995,"wood",6},{1990,"rubber",3},{1997,"plastic",9},
{1998,"wood",7}
};
while(1)
{
printf("\nKey in the part number to retrieve the information from\n");
scanf("%s",m);
printf("\nKey the part number till the information is retrieved(End)\n");
scanf("%s",n);
a=((m[0]-65)*9+(m[2]-49));
b=((n[0]-65)*9+(n[2]-49));
printf("\na is %d,\nb is %d,\nm[0] is %d, n[0] is %d",a,b,m[0],n[0]);
c=a;
d=a;
while(c>=9)
{
c-=9;
}
printf("\nc after while is %d",c);
while( d>9)
d-=9;
for(i=a;i<=b;i++,c++,d++)
{
if(c==9)
{
m[0]+=1;
c=0;
}
if(d==9)
{
d=0;
}
printf("\nPart: %c%c%d, Year: %d, Material: %s, Quantity: %d",m[0],m[0],d+1,p[i].
year,p[i].material,p[i].qty);
}
printf("\nKey q to quit or any other key to continue\n");
scanf("%s",q);
if(q[0]==113)
break;
}
}

