#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rstr[100];
    int i,j,ln;
    printf("Enter the string(word): ");
    scanf("%s",str);
    rstr=strrev(str);
    if(str==rstr){
    	printf("palindrome");
    }}
    
