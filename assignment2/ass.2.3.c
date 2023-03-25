#include<stdio.h>
int main()
{
int a,temp,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the swapped digit is %d %d",a,b);
return 0;
}
