#include<stdio.h>
#include<math.h>
int main()
{
    int d,n,i=0;
    scanf("%d",&n);
    while(pow(2,i)<n)
    {
        i++;
    }
    if(pow(2,i)-n>n-pow(2,i-1))
    {
        d=n-pow(2,i-1);
    }
    else
    {
        d=pow(2,i)-n;
    }
    printf("%d",d);
}