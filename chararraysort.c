#include<stdio.h>
#include<string.h>
int sort(char arr[][50],int n){
	char temp[50];
	for (int i=0;i<n;i++)
	{

		for(int j=0;j<n-i;j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
		 
			}
		}


	}
		for (int z=0;z<=n;z++)
		{
		printf("%s",arr[z]);

		}
		
	}
int main(){

	char array[50][50]; int n;
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n;i++){
		fgets(array[i],50,stdin);
		}
	printf("\n");
	sort(array,n);

	}




