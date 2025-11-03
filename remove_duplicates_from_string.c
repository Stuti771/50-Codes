#include<stdio.h>
#include<string.h>
int main(){
    char s[]="abccdaghebaaghe"; 
    printf("String = %s",s);
    int l=strlen(s);
    int i,j,k=0;
    for(i=0;i<l;i++){
      int count=0;
      for(j=0;j<i;j++){
        if(s[i]==s[j]){
          count++;
          break;
        }
      }
      if(count==0)
        s[k++]=s[i];
    }
    s[k]='\0';
    printf("\nUpdated string = %s",s);
    return 0;
}