#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ca[a],ba[a],i;
    int cas=0,bas=0,res;
    for (i=0; i<a ;i++)
    {
        scanf("%d",&ca[i]);
    }
    for (i=0; i<a ;i++)
    {
        scanf("%d",&ba[i]);
    }
    for (i=0; i<a ;i++)
    {
        cas+=ca[i];
        bas+=ba[i];
    }
    res=bas-cas;
    if (res<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",res);
    }
    return 0;
}