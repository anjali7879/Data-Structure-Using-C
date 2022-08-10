#include<stdio.h>
#include<string.h>

int main(){
           printf("Enter 1st string:\t");
           char s1[100],s2[100];
           scanf("%s",s1);
           printf("Enter 2nd string:\t");
           scanf("%s",s2);
           printf("Return value of strcmp():%d",strcmp(s1,s2));
           if(strcmp(s1,s2)==0) 
           printf("strings are equal");
           else if(strcmp(s1,s2)>0)
           printf("First string is greater");
           else printf("second string is greater");
}