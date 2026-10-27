#include<stdio.h>
int main()
{
int a,b,c,d,big1,big2,min1,min2;
printf("enter four nunbers");
scanf("%d%d%d%d" ,&a,&b,&c,&d);
if(a>b)
{
big1=a;
min1=b;
}
else 
{
big1=b;
min1=a;
}
if (c>d)
{
big2=c;
min2=d;
}
else
{
big2=d;
min2=c;
}
if(big1>big2)
{
printf("%d is the largest ",big1);
}
else 
{
printf("%d is the largest",big2);
}
if 
(min1<min2)
{
printf("\n%d is smallest",min1);
}
else 
printf(" \n%d is smallest" ,min2);
{
return 0;
}


    