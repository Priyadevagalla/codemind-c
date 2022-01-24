#include<stdio.h>
int main()
{
    int P,T,R,SI,N;
    scanf("%d%d%d",&P,&T,&R);
    N=P*T*R;
    SI=N/100;
    printf("%d",SI);
}