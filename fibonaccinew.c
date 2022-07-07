#include<stdio.h>
int main()
{int x,c=0,a=0,i,b=1,temp;
scanf("%d",&x);
for(i=0;i<=x;i++){
c=a+b;


printf("%d \n",c);
temp=b;
b=c;
a=temp;


}
}
