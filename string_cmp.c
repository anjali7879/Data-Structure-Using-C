#include<stdio.h>

int string_cmp(const char *s1,const char *s2){
  for(; *s1!='\0' && *s2!='\0';s1++,s2++)
      {
           if(*s1>*s2)return 1;
           if(*s1<*s2)return -1;
     }
           if(*s1!='\0')return 1;
           if(*s2!='\0')return -1;
          return 0;
}
   int main() {
          printf("Enter 1st string:\t");
          char s1[100],s2[100];
          scanf("%s",s1);
          printf("Enter 2nd string:\t");
          scanf("%s",s2);
          int d = string_cmp(s1,s2);
          if(d>0) printf("1st string is greater");
          else if(d<0) printf("2nd string is greater");
          else printf("Both strings are equal");
          return 0;
}