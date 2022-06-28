#include<stdio.h>
int main()
{
    int r,rev=0,num;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("%d",rev);
}