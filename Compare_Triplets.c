#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],i,j,a=0,b=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(i==j)
        {
            if(arr1[i]>arr2[j])
            {
                a++;
            }
            else if(arr1[i]<arr2[j])
            {
                b++;
            }
        }
    }
  }
  printf("%d %d ",a,b);
}