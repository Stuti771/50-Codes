#include<stdio.h>
int main(){
    int a[]={3,1,3,8,5,6,1,34,5,1,6,77};
    int l=sizeof(a)/sizeof a[0];
    int target=1;
    int count=0;
    for(int i=0;i<l;i++){
      if(a[i]==target)
        count++;
    }
    printf("No of occurence of %d = %d",target,count);
    return 0;
}