#include<stdio.h>
int main(){
for(int i=1;i<30000;i++){
	if(i%10==0 && i%9==0 && i%8==0 && i%7==0){
		printf("%d \n",i);
}
}
} 
