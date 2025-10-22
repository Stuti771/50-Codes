#include<stdio.h>
int main(){
    int a[]={9,6,3,2,1,5,7,10,13};
    int n=15;
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is : ");
    for(int i=0;i<l;i++)
     printf("%d ",a[i]); 
    printf("\nMissing no in above array from 1 to %d : ",n);
    for(int i=1;i<=n;i++){
      int count=0;
      for(int j=0;j<l;j++){
        if(i==a[j])
          break;
        else
          count++;
      }
      if(count==l)
        printf("%d ",i);
    } 
    return 0;
}
