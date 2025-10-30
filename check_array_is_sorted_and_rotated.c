#include<stdio.h>
int main(){
    int a[]={3,4,5,-1,0,1,2,7};
    int l=sizeof(a)/sizeof a[0];
    printf("Array is :");
    for(int i=0;i<l;i++)
      printf(" %d",a[i]);
    int count=0;
    printf("\nIs the above array sorted and rotated ?");
    for(int i=0;i<l;i++){
      if(a[i]>a[(i+1)%l])  // %l is used to compare last and first element
        count++;
    }
    if(count==1)
      printf("\nYes");
    else
      printf("\nNo");
    return 0;
}