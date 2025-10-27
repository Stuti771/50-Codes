#include<stdio.h>
int main(){
    int a[]={9,6,3,8,1,5,7};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    printf("\nLeaders in above array are :");
    for(int i=0;i<l;i++){
      int count=0;
      for(int j=i+1;j<l;j++){
        if(a[i]<a[j])
          break;
        else
          count++;
      }
      if(count==l-1-i)
        printf(" %d",a[i]);
    } 
    return 0;
}
