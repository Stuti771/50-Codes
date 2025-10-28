#include<stdio.h>
int main(){
    int a[]={1,2,5,7,4,3,0};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    int sum=5;
    printf("\nAll possible pairs with sum %d are : ",sum);
    for(int i=0;i<l;i++){
      for(int j=i+1;j<l;j++)
        if(a[i]+a[j]==sum)
          printf("(%d,%d) ",a[i],a[j]);
    } 
    return 0;
}
