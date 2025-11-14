#include<stdio.h>
int main(){
    int r=3,c=3;
    int a[3][3]={11,21,56,43,90,67,82,49,13};
    int t,b[r][c];
    printf("Matrix :\n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        printf("%d ",a[i][j]); 
      printf("\n");
    }
    for(int i=0;i<r;i++){       //transpose of matrix
      for(int j=0;j<c;j++)
        b[j][i]=a[i][j];
    }
    for(int i=0;i<r;i++){       //reverse of matrix
      for(int j=0;j<c/2;j++){
        t=b[i][j]; 
        b[i][j]=b[i][c-1-j];
        b[i][c-1-j]=t;
      }
    }
     printf("\nMatrix after 90 deg clockwise rotation :\n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        printf("%d ",b[i][j]); 
      printf("\n");
    }
    return 0;
}