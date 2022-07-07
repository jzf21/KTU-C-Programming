#include<stdio.h>
int main()
{
int i,j,x;
printf("Program to find all primes\n");
printf("Enter number:");
scanf("%d",&x);
int prime[x+1];
for(i=2;i<=x;i++){
prime[i]=i;}
int i=2;
while((i*i)<=x){
	if(prime[i]!=0){
		for(j=2;j<=x;j++){
			if(primes[i]*j>x){break;}
		else{prime[prime[i]*j]=0;}
		 }
		}
		i++;
	}
	
	 for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            printf("%d\n",primes[i]);
    }

    return 0;
}
