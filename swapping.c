#include<stdio.h>
main()
{
int a,b,exc=0;
printf("Enter two numbers:");
scanf(" %d  %d",&a,&b);
printf("the numbers before exchange are %d and %d",a,b);
exc=a;
a=b;
b=exc;
}
