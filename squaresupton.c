#include<stdio.h>
//sum of odd numbers to find squares up to n
int main()
{int x,c=0,a,i,b,sum=0;
scanf("%d",&x);
for(i=0;i<=x;i++){
a=i;

b=i+1;

sum=sum+c;
printf("%d \n",sum);

c=a+b;
}
}
