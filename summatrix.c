#include<stdio.h>
int main(){

int i,j,k,l,arr1[3][3],arr2[3][3],arr[3][3];

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		scanf("%d",&arr1[i][j]);
		}
		}
printf("Second arrray");	
for(k=0;k<3;k++){
	for(l=0;l<3;l++){
		scanf("%d",&arr2[k][l]);
		}
		}
printf("HUH");
for(k=0;k<3;k++){
	for(l=0;l<3;l++){
		arr[k][l]=arr1[k][l]+arr2[k][l];
					}}
					
for(k=0;k<3;k++){
printf(" \n");
	for(l=0;l<3;l++){
		printf("%d \t",arr[k][l]);}
		}
		}
		
