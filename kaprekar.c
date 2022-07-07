#include<stdio.h>
int main(){
int i,j,k,l,sum,dig;
for(i=32;i<=100;i++){
	j=i*i;
	sum=0;
	while(j!=0){
		dig=j%100;
		sum+=dig;
		j/=100;
	}
	if(sum==i){
	printf("%d " ,i);
	}
	
}}
