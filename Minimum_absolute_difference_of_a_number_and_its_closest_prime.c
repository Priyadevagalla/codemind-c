#include<stdio.h>
#include<math.h>
int isprime(int num)
{
    int i,fc=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
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
	int num,pp,np,avg,res,r1,r2;
	float sq;
	scanf("%d",&num);
	if(isprime(num))
	{
	    printf("0");
	}
	else
	{
    	for(pp=num-1;!isprime(pp);pp--);
    	for(np=num+1;!isprime(np);np++);
    	r1=np-num;
    	r2=num-pp;
    	if(r1>r2)
    	{
    	    printf("%d",r2);
    	}
    	else
    	{
    	    printf("%d",r1);
    	}
	}
}
