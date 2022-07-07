#include<stdio.h>
int main(){ 
long int x,dig,max=0,i=1,pos;
scanf("%ld" , &x);

while(x!=0){ 
	
	dig=x%10;
	if(dig > max){
		max=dig;
		pos=i;
	}
	x/=10;
	
	i+=1;
}
printf("%ld %ld",max,pos);
}
