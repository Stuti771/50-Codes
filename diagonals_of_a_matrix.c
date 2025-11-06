#include<stdio.h>
int main(){
    int a[3][3]={11,22,13,24,56,10,87,45,90};
    int n=3;
    printf("Array :\n");
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
        printf("%d ",a[i][j]); 
      printf("\n");
    }
    printf("\nDiagonal 1 = ");
    for(int i=0;i<n;i++)
      printf("%d ",a[i][i]);  
    printf("\nDiagonal 2 = ");
    for(int i=0;i<n;i++)
      printf("%d ",a[i][n-1-i]);
    return 0;
}