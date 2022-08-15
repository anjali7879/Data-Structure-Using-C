#include<stdio.h>

    void pal_str(const char *s){
              const char *p = s;
              while(*(p++)!='\0');
              while(*(--p)=='\0');
              for(;p!=s;--p;++s)
              if(*p!=*s)break;
              if(p==s)
             printf("string is pallindrome");
         else    printf("string is not pallindrome");
     }
         void main(){
              char s[100];
              printf("Enter string for checking:\t");
              scanf("%s",s);
              pal_str(s);
       }
             