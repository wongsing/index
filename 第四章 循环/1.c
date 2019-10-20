#include <stdio.h>

int main()

{
	int x;
	int count = 0;
	
	x = 1;
	while(count< 50){
		int i;
		int isPrime =1;
		for(i=2;i<x;i++){
			if(x%i == 0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1){
			printf("%d\t",x);
			count ++;
		
			}
			x++;
		}
		
		return 0;
	}

