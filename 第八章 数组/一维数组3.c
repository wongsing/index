#include <stdio.h>

int main (void)
{
	int isPrime(int x ,int knownPrime[],int numberOfKnownPrime){
		int ret = 1 ;
		int i ;
		for(i=0;i<numberOfKnownPrime;i++){
			if(x%knownPrime[i]==0){
				ret =0;
				break;
			}
		}
		return ret;
	}
	const int number = 100;
	int prime[number];
	int count =1;
	int i = 3;
	prime[0]=2;
	
	while(count < number){
		if(isPrime(i,prime,count)){
			prime[count++] = i ;
		}
		i++;
	}
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5)printf("\t");
		else printf("\n");
	}
	
	return 0;
}
