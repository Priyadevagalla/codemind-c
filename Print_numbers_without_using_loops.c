#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i;
    if (a>=1 && a<=10000)
    {
        for (i=1; i<=a; i++)
        {
            if (i==a)
            {
               printf("%d",i); 
            }
            else
            {
                printf("%d ",i);
            }
        }
    }
    else if (a<=0 || a>10000)
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
    
}