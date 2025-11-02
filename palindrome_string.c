#include<stdio.h>
#include<string.h>
int main(){
    char s[]="abcdefgedcba";
    int l=strlen(s);
    int c=1;         
    for(int i=0;i<l/2;i++)
      if(s[i]!=s[l-1-i]){
        c=0;
        break;
    }
    printf("String = %s\n",s);
    if(c==0)
      printf("The above string is not palindrome");
    else
      printf("The above string is palindrome");
    return 0;
}