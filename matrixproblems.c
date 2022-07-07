#include<stdio.h>

int trace(int m,int n, int a[][3]){
printf("printing Diagonal Elements");
	for(int i=0;i<m;i++){
		printf("\n %d \n", a[i][i]);}
		}
		
int readarray(int m, int n){



		

int i,j,a[m][n];
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("Enter element");
		scanf("%d",&a[i][j]);
			}
		}
for(i=0;i<n;i++){
printf("\n");
	for(j=0;j<m;j++){
	printf("%d\t", a[i][j]);}
	}
	trace(m,n,a);
	}
	


int main(){
	readarray(3,3);}
