#include<stdio.h>
int main()
{
int a,n,s=0;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
s=s+n;
a=a/10;
}
printf("the sum of three digits are %d",s);
return 0;
}