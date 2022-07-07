#include <stdio.h>  
#include <string.h>  
    
int reversechar(char str[]){
	int i=0;
	int temp;
	char str1[50];
	int len=strlen(str);
	strcpy(str1,str);
	for(i=0;i<len/2;i++){
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-i-1]=temp;

	}
	printf("%s",str);
	if(strcmp(str1,str)==0){
	printf("\nPALindROMe");}
	else{
	printf("\n not palindrome");}
	}


   
   
   
int main()  
    {  
        char str[40]; // declare the size of character string  
        printf (" \n Enter a string to be reversed: ");  
        scanf ("%s", str);  
        reversechar(str);
          
   
    }  
