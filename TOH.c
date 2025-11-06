#include<stdio.h>

void TOH(int n,char L, char M,char R);
int main(){
    int n;
    char L='L',M='M',R='R';
    printf("enter a number; ");
    scanf("%d",&n);
    TOH(n,L,M,R);
    return 0;
}
void TOH(int n,char L,char M,char R){
    int c;
    if(n==1){
        printf("move %c to %c\n",L,R);
    }
    else{ 
    TOH(n-1,L,R,M);
    printf("move %c to %c\n",L,R);
    TOH(n-1,M,L,R);
 
    }
}