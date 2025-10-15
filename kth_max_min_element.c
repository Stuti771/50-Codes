#include<stdio.h>
int main(){
   int a[]={17,4,22,8,3,1};
   int i,j,n,k;
   n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n-1;i++){
    int t=0;
    for(j=i+1;j<n;j++)
      if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;      
    }
   }
   printf("Enter a no : ");
   scanf("%d",&k);
   printf("%d largest no : %d\n",k,a[n-k]);
   printf("%d smallest no : %d",k,a[k-1]);   
   return 0;
}