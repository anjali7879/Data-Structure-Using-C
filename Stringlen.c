#include<stdio.h>

int string_length(const char *s)
{   
     int i = 0;
     while(*(s+i)!='\0')i++;
     return i;
}
 
int main()
{
    printf("Enter a word :\t");
    char s[1000];
    scanf("%s",s);
    printf("The length of the given string is %d",string_length(s));
    return 0;
}