//wap to find the first position in lsb
#include<stdio.h>
int main()
{
    int x, count=0;
    printf("enter any number");
    scanf("%d",x);
    while(x!=0)
       {
        count++;
        if(x&1 == 1)
        {
            break;
        }
        else
        {
            x=x>>1;
        }
       }
       printf("first 1 from lsb is at %d",count);
       return 0;
}
