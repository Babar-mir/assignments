#include<stdio.h>

void printarry(int arr[],int n);
void insertion(int arr[],int n);

int main(){
    int arr[]= {7,4,3,25,2,5},n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("array before sorting\n");
    printarry(arr,n);
    printf("array after sorting\n");
    insertion(arr,n);
    printarry(arr,n);
    return 0;
}                                                                                                                                                                                                                                

void printarry(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
}

void insertion(int arr[],int n){
    int key,i,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}
