#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter a string:\t");
    char s1[1000],s2[1000];
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("Copied string:%s",s2);
    return 0;
}