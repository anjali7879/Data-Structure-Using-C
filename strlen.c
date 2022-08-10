#include<stdio.h>
#include<string.h>

int main()
{ 
    printf("Enter a word:\t");
    char s[1000];
    scanf("%s",s);
    printf("The length of given string is %d",strlen(s));
    return 0;
}