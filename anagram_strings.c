#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="raceaccdg";
    int l1=strlen(s1);
    printf("String 1 = %s\n",s1);
    char s2[]="cardgacce";
    int l2=strlen(s2);
    printf("String 2 = %s\n",s2);
    if(l1!=l2)
      printf("The above strings are not anagrams");
    else{
      int f1[256]={0};
      int f2[256]={0};
      for(int i=0;i<l1;i++)
        f1[s1[i]]++;
      for(int i=0;i<l2;i++)
        f2[s2[i]]++;
      int i;
      for(i=0;i<256;i++){
        if(f1[i]!=f2[i])
          break;
      }
      if(i<256)
        printf("The above strings are not anagrams");
      else
        printf("The above strings are anagrams");
    }
    return 0;
}