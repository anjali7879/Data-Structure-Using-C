#include<stdio.h>
#include<string.h>

char *string_rev(char *s){
         char temp[1000];
         int l = strlen(s);
         for(int i = l-1;i>=0;i--)
         temp[l-i]=*(s+i);
         for(int i = 0;i<1;i++)
         *(s+i)=temp[i];
         return s;
}

int main()
{
    printf("Enter a string:\t");
    char s1[1000];
    scanf("%s",s1);
    string_rev(s1);
    printf("Reverse string is:%s",s1);
    return 0;
}