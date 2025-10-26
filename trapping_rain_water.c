#include<stdio.h>
int main(){
    int a[]={4,3,0,5,2,0,5};
    int l=sizeof(a)/sizeof(a[0]);
    int max1=a[0];
    int leftMax[l];
    for(int i=0;i<l;i++){
      if(a[i]>max1)
        max1=a[i];
      leftMax[i]=max1;
    }
    int max2=a[l-1];
    int rightMax[l];
    for(int i=l-1;i>=0;i--){
      if(a[i]>max2)
        max2=a[i];
      rightMax[i]=max2;
    }
    int min=0;
    int result=0;
    for(int i=0;i<l;i++){
       if(leftMax[i]<=rightMax[i])
         min=leftMax[i];
       else
         min=rightMax[i];
       min=min-a[i];
       result+=min;
    }
    printf("Water trapped = %d units",result);
    return 0;
}