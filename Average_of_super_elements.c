#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    double avg,sum=0;
    int c=0,count=0;
    for (i=0; i<a; i++)
    {
        c=1;
        for (j=0; j<a; j++)
        {
            if (i!=j && arr[i]!=0)
            {
                if (arr[i]==arr[j])
                {
                    c++;
                    arr[j]=0;
                }
            }
        }
        if (c==arr[i])
        {
            sum+=arr[i];
            count++;
        }
    }
     if (count==0)
    {
        printf("%d",-1);
    }
    else
    {
        avg=sum/(count*1.0);
        printf("%.2lf",avg);
    }
    return 0;
}