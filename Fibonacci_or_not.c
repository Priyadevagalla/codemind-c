#include<stdio.h>
int main()
{
    int a,b,c,next,num;
    scanf("%d",&num);
    if((num==0)||(num==1))
    printf("%d",num);
    else
{
    a=0;
    b=1;
    c=a+b;
    while(c<num)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==num)
    printf("True");
    else
printf("False");
}
return 0;
}