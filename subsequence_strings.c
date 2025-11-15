#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="acb";
    int l1=strlen(s1);
    printf("String 1 = %s\n",s1);
    char s2[]="aabbcb";
    int l2=strlen(s2);
    printf("String 2 = %s\n",s2);
    int count=0;
    int i=0,j=0;
    while(i<l1&&j<l2){
      if(s1[i]==s2[j]){
        count++;
        i++;
      }
      j++;
    }
    if(count==l1)
      printf("String 1 is a subsequence of String 2");
    else
      printf("String 1 is not a subsequence of String 2");
    return 0;
}