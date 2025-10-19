#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7};
    int l=sizeof(a)/sizeof a[0];
    printf("Array is : ");
    for(int i=0;i<l;i++)
       printf("%d ",a[i]);
    int t=a[l-1];
    int j=l-1;
    for(int i=l-2;i>=0;i--)
       a[j--]=a[i];
    a[0]=t;
    printf("\nUpdated array is : ");
    for(int i=0;i<l;i++)
       printf("%d ",a[i]);
    
    return 0;
}