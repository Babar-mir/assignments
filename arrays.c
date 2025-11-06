#include<stdio.h>

int main(){
    int nums1[20]={0};
    printf("nums[20]={0} and nums[5]=%d\n",nums1[5]);
    int nums2[20] = {5};
    printf("nums[20]={5} and nums[0]=%d\n",nums2[0]);
    int nums3[20] = {5};
    printf("nums[20]={5} and nums[5]=%d\n",nums3[5]);
    return 0;
}