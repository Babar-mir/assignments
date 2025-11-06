#include<stdio.h>

int fibo(int);
int main(){
    int n,i;
    printf("enter a number; ");
    scanf("%d",&n);
    printf("fibonacci of n terms = ");
    for(i =0;i<=n;i++){

        printf("%d,",fibo(i));
    }
    return 0;
}

int fibo(int n){
    if (n == 0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}