#include<stdio.h>
#include<limits.h>
int main(){
    int a[]={2,3,-8,7,-1,2,3};
    int l=sizeof(a)/sizeof a[0];
    int maxSum=INT_MIN;
    int currentSum=0;
    int start=0,end=0,s=0;
    for(int i=0;i<l;i++){
       currentSum+=a[i];

      if(currentSum>maxSum){
        maxSum=currentSum;
        start=s;
        end=i;
      }
      if(currentSum<0){
        currentSum=0;
        s=i+1;
      }
    }
    printf("Maximum subarray sum = %d",maxSum);
    printf("\nSubarray is : ");
    for(int i=start;i<=end;i++)
      printf("%d ",a[i]);
    return 0;
}