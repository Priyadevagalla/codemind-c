#include<stdio.h>
long int lcm(long int  a,long int b){
    long int max=a;
    if (a<b){
        max=b;
    }
    long int l=max;
    while (1){
        if (l%a==0 && l%b==0){
            return l;
        }
        else{
            l+=max;
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    long int l=lcm(arr[0],arr[1]);
    for (i=2; i<a; i++){
        l=lcm(l,arr[i]);
    }
    printf("%ld",l);
    return 0;
}