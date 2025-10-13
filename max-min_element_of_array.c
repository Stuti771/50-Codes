#include<stdio.h>
int main(){
    int a[6]={3,34,5,1,6,77};
    int l=sizeof(a)/sizeof a[0];
    int max=a[0];
    int min=a[0];
    for(int i=1;i<l;i++){
      if(a[i]>max)
        max=a[i];
      if(a[i]<min)
        min=a[i];
    }
    printf("Maximum element = %d",max);
    printf("\nMinimum element = %d",min);
    return 0;
}