#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swap digits are %d %d", a,b);
    return 0;

}