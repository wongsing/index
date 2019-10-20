#include <stdio.h>

int main()

{
	int x ;
	int isPrime =1 ;
	
	scanf("%d",&x);
	
	int i ;
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			isPrime =0 ;
			break;
		}
	}
		if(isPrime == 1){
		printf("是素数\n");
		}else{
			printf("不是素数\n");
		}
	
	if(x == 1){
		printf("是素数");
	}
	return 0;
}
