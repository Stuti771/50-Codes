#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="radesgcdg";
    int l1=strlen(s1);
    printf("String 1 = %s\n",s1);
    char s2[]="radesgtij";
    int l2=strlen(s2);
    printf("String 2 = %s\n",s2);
    int l;
    if(l1<=l2)
      l=l1;
    else
      l=l2;
    int j=0;
    char r[j];
    for(int i=0;i<l;i++){
      if(s1[i]==s2[i])
        r[j++]=s1[i];
      else
        break;
    }
    r[j]='\0';
    printf("\nLongest common prefix of above strings : %s",r);
    return 0;     
}