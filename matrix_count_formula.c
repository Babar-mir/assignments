#include<stdio.h>

int fact(int n);
int main(){
    int n,PMM;
    printf("enter number of matrices; ");
    scanf("%d",&n);
    if (n<2){
        printf("at least 2 matrices are needed\n");
    }
    PMM = (fact(2*n-2))/(fact(n)*fact(n-1));
    printf("number of possible matrix multiplication; %d",PMM);
    return 0;
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}