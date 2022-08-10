#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter a string:\t");
    char s1[1000];
    scanf("%s",s1);
    strrev(s1);
    printf("Reverse string is:%s",s1);
    return 0;
}