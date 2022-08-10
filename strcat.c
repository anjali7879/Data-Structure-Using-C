#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter 1st string:\t");
    char s1[1000],s2[1000];
    scanf("%s",s1);
    printf("Enter 2nd string:\t");
    scanf("%s",s2);
    printf("Concatenated string:%s",strcat(s1,s2));
    return 0;
}