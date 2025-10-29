#include<stdio.h>
int main(){
   int a[]={1,3,4,6,10,22,30,45,50};
   int l1=sizeof(a)/sizeof(a[0]);
   int b[]={1,2,3,5,8,9,15,22,30,46,55};
   int l2=sizeof(a)/sizeof(a[0]);
   int i=0,j=0;
   printf("Intersection of above two sorted arrays :");
   while(i<l1 && j<l2){
      if(a[i]==b[j]){
        printf(" %d",a[i]);  
        i++;
        j++;
      } 
      else if(a[i]<b[j]) 
        i++;
      else
        j++;
   }
   return 0;        
}