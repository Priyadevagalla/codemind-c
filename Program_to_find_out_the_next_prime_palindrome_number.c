#include<stdio.h>
int npal(int k)
{
    int r,s=0,d;
    r=k;
    while(k)
    {
        d=k%10;
        s=s*10+d;
        k/=10;
    }
    if(s==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pr(int k)
{
    int r,l=0;
    for(r=1;r<=k;r++)
    {
        if(k%r==0)
        {
            l++;
        }
    }
    if(l==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int v,k;
    scanf("%d",&v);
    for(k=v+1;;k++)
    {
        if(npal(k) && pr(k))
        {
            printf("%d",k);
            break;
        }
    }
}