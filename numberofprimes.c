#include<stdio.h>
int main()
{
int digit,i,x,temp,flag=0,sum=0;

printf("Enter Number:");
scanf("%d",&x);

while(x!=0)
{
digit=x%10;
//printf("%d",digit);
for(i=2;i<=digit/2;i++){
flag=0;
if(digit==2){
flag=0;
break;}
if (digit%i==0)
{flag=1;
break;}



if(flag==0){
sum=sum+1;}
}
x/=10;
}
printf("%d",sum);
}
