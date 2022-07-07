#include<stdio.h>
int main()
{
int x, y, z,sum=0,i;
printf("Program to find sum of elements in an array \n");
printf("enter number of elements :");
scanf("%d",&x);
int array[x];
for(i=0;i<x;i++){
printf("\nEnter number:");
scanf("%d",&array[i]);
}
for(i=0;i<x;i++){
sum+=array[i];
}
printf("%d",sum);
}
