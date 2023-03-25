#include<stdio.h>
int main()
{
int a,n,d=0;
printf("enter the three digit number");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
d=(d*10)+n;
a=a/10;
}
printf("the reverse digit is %d",d);
 return 0;
}