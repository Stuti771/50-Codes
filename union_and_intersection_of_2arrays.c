#include<stdio.h>
int main(){
    int a1[]={10,20,10,40,50,60};
    int l1=sizeof(a1)/sizeof a1[0];
    int a2[]={10,25,10,35,60};
    int l2=sizeof(a2)/sizeof(a2[0]);
    int s=0,t=0,m=0,n=0;
    int u[s+t];
    int in[n];
    int j=0;
    for(int i=0;i<l1;i++){
     int c1=0;
     for(int p=0;p<i;p++){
       if(a1[i]==a1[p])
         c1++;
     }
     if(c1==0){
       s++;
       u[j++]=a1[i];
    }}
     for(int i=0;i<l2;i++){
      int c2=0;
      for(int q=0;q<i;q++){
        if(a2[i]==a2[q])
          c2++;
      }
      if(c2==0){
       int c3=0;
     for(int k=0;k<l1;k++){
      if(a2[i]==a1[k])
        c3++;   
     }
     if(c3==0){
       t++;
       u[j++]=a2[i];
     }
     else{
       n++;
       in[m++]=a2[i];
     }}
    } 
    printf("Union of above arrays is : ");
    for(int i=0;i<s+t;i++)
       printf("%d ",u[i]);
    printf("\nIntersection of above arrays is : ");
    for(int i=0;i<n;i++)
       printf("%d ",in[i]);
    return 0;
}