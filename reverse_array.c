#include<stdio.h>
int main(){
    int a[6]={10,20,30,40,50,60};
    int l=sizeof(a)/sizeof a[0];
    printf("Array is : ");
    for(int i=0;i<l;i++)
       printf("%d ",a[i]);
    int t;
    for(int i=0;i<l/2;i++){
       t=a[i];
       a[i]=a[l-1-i];
       a[l-1-i]=t;
    }
    printf("\nReversed array is : ");
    for(int i=0;i<l;i++)
       printf("%d ",a[i]);
    return 0;
}