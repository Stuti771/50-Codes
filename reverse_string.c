#include<stdio.h>
#include<string.h>
int main(){
    char s[]="laughing";
    printf("String=%s",s);
    int l=strlen(s);
    int t,i=0,j=l-1;
    while(i<l/2){
      t=s[i];
      s[i]=s[j];
      s[j]=t;
      i++;
      j--;
    }
    printf("\nReversed string=%s",s);
    return 0;
}