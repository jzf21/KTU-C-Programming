#include<stdio.h>
int main(){
int x,fact=1;
printf("Enter Number:");
scanf("%d",&x);

for(int i=1;i<=x;i++){
fact*=i;
}
printf("%d",fact);
}
