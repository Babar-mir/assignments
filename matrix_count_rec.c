#include<stdio.h>

int matrix_count(int n);
int main(){
    int n,i;
    printf("enter number of matrices; ");
    scanf("%d",&n);
    printf("number of possible matrix multiplications; %d",matrix_count(n));
    return 0;
}


int matrix_count(int n){
    int i,sum=0;
    if(n==1||n==0){
        return 1;
    }
    for(i=1;i<n;i++){
         
        sum+=matrix_count(i)*matrix_count(n-i);
    }
    return sum;
}
