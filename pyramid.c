#include<stdio.h>
int main(){
int i,j,k;
for(i=0;i<=40;i++){
	for(j=i;j<=40;j++){
	printf(" ");
	}
	for(k=1;k<=i;k++){
		printf("* ");
	}
	printf("\n");}
}
