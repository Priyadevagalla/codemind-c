#include<stdio.h>
int isUgly(int n)
{
    if (n == 1)
        return 1;
    if (n <= 0)
        return 0;
    if (n % 2 == 0) {
        return (isUgly(n / 2));
    }
    if (n % 3 == 0) {
        return (isUgly(n / 3));
    }
    if (n % 5 == 0) {
        return (isUgly(n / 5));
    }
 
    return 0;
}
int main()
{
    int no,k;
	scanf("%d",&no);
	k = isUgly(no);
    if (k == 1)
        printf("Ugly Number");
    else
        printf("Not Ugly Number");
    return 0;
}