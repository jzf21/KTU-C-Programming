#include<stdio.h>
int main(){
int n,x,flag=0;

printf("enter number of terms:");
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++){
printf("Enter Number");
scanf("%d",&array[i]);}
printf("enter number to be searched  for :");
scanf("%d",&x);
for(int j=0;j<n;j++){
if(array[j]==x){
printf("found at %d",j);
flag=1;
break;
}}
if(flag==0){
printf("number not found");}
}
