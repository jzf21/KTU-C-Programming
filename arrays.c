#include<stdio.h>
int main()
{
int array[20], sum=0,i,sum2=0;
for(i=0;i<=20;i++){
array[i]=i;
}
for(i=0;i<=20;i++){
sum2+=i;
sum+=array[i];
}
printf("%d",sum);
printf("%d",sum2);

}
