#include<stdio.h>
#include<math.h>
int main(){
int x,y,digit,reverse=0,sum=0;
printf("Enter number to check if it is a palindrome or an armstrong :");
scanf("%d",&y);
x=y;
while(x!=0){
digit=x%10;
reverse=reverse*10+digit;
sum+=pow(digit,3);
x/=10;
}
if(reverse==y){
printf("palindrome \n");
}
if(sum==y){
printf("armstrong \n");}
}
