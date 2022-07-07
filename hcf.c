#include<stdio.h>
int main(){
int x,y,gcd;
printf("Enter Two Numbers: ");
scanf("%d %d",&x,&y);
for(int i=1;i<=x && i<=y;i++){
	if(x%i==0 && y%i==0){
		 gcd=i;
		}}
printf("The gcd is %d",gcd);
}
