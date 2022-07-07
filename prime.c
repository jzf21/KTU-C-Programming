#include<stdio.h>
int main(){
printf("Check if number is prime\n");
int n,breakpoint=0,i;
printf("enter number");
scanf("%d",&n);
if(n==0 || n==1){
printf("\nnot prime");}

for(i=2;i<=n/2;i++){
	if(n%i==0){
		printf("not prime");
		breakpoint=1;
		break;}
}

if(breakpoint==0){
	printf("prime");
}
}

	


