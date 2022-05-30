#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,count=0,c=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        c=0;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    c+=1;
                }
            }
        }
        if (c==1)
        {
            continue;
        }
        else
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}