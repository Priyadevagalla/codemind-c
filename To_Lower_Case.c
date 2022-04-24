#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else
        {
            str[i]=str[i];
        }
        i++;
    }
    printf("%s",str);
}