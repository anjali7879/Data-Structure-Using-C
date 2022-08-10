#include<stdio.h>

char *string_copy(char *d, const char *s)
{
       char *d1 = d;
         while(*d1++ = *s++);
        return d;
}
int main()
{
    printf("Enter a string:\t");
    char s1[1000],s2[1000];
    scanf("%s",s1); 
    string_copy(s2,s1);
    printf("Copied string:%s",s2);
    return 0;
}