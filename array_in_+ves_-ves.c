#include<stdio.h>
int main(){
    int a[]={9,-3,3,2,-1,-5,7,-5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Array is : ");
    for(int i=0;i<n;i++)
     printf("%d ",a[i]); 
    int b[n];
    int j=0;
    for(int i=0;i<n;i++){
      if(a[i]<0)
        b[j++]=a[i];
    }
    for(int i=0;i<n;i++){
      if(a[i]>0)
        b[j++]=a[i];
    }
    printf("\nUpdated array is : ");
    for(int i=0;i<n;i++)
     printf("%d ",b[i]); 
    return 0;
}
