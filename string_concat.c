#include<stdio.h>
  
char *string_concat(char *s1, const char *s2)
{
     char *p=s1;
     while(*p!='\0')
       ++p;
     while(*s2!='\0')
       *p++=*s2++;
      *p='\0';
    return s1;
}

int main()
{
    printf("Enter 1st string:\t");
    char s1[1000],s2[1000];
    scanf("%s",s1);
    printf("Enter 2nd string:\t");
    scanf("%s",s2);
    string_concat(s1,s2);
    printf("Concatenated string:%s",s1);
    return 0;
}