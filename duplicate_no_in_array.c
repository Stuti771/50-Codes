#include<stdio.h>
int main(){
    int a[]={9,1,8,9,6,3,8,1,5,9,7};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    printf("\nDuplicates in above array are :");
    for(int i=0;i<l;i++){
     int c=0;
     for(int j=0;j<i;j++){
       if(a[i]==a[j])
         c++;
     }
     if(c==0){
      for(int k=i+1;k<l;k++)
        if(a[i]==a[k]){
          printf(" %d",a[i]);
          break;
        }
      }
    } 
    return 0;
}
