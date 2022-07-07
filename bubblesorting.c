#include<stdio.h>
int main()
{
int x, j, z,sum=0,i,temp;
printf("Bubble Sort \n");
printf("enter number of elements :");
scanf("%d",&x);
int array[x];
for(i=0;i<x;i++){
printf("\nEnter number:");
scanf("%d",&array[i]);
}
for(i=0;i<x;i++){
for(j=0;j<x-1;j++){
if(array[j]>array[j+1]){
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}		

for(i=0;i<x;i++){
      printf("%d\n",array[i]);
}
} 
