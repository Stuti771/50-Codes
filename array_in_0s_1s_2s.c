#include<stdio.h>
int main(){
    int a[]={2,0,1,2,1,0,1,2,0};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Array is : ");
    for(int i=0;i<n;i++)
     printf("%d ",a[i]); 
    int low=0,mid=0,high=n-1;
    int t;
    while(mid<=high){
      switch(a[mid]){
        case 0:
           t=a[mid];
           a[mid]=a[low];
           a[low]=t;
           mid++;
           low++;
           break;
        case 1:
           mid++;
           break;
        case 2:
           t=a[mid];
           a[mid]=a[high];
           a[high]=t;
           high--;
      }
    }
    printf("\nUpdated array is : ");
    for(int i=0;i<n;i++)
     printf("%d ",a[i]); 
    return 0;
}