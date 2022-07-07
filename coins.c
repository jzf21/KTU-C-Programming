#include <stdio.h>
int main(){
int sum,array[7]={1,5,10,20,50,100,200},i,k,j,sum2=0,sum3=0;

scanf("%d",&sum);
int sum1=sum;
for(i=6;i<=0;i--){

	if(sum/array[i]!=0)
	{
	k=sum/array[i];
	sum=sum%array[i];
	sum2+=k*array[i];
	sum3+=k;
	
	}
	if(sum2==sum1){
		break;}
		}
printf("%d %d",sum2,sum3);
}
	
