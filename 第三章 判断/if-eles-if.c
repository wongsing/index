#include <stdio.h>

int main()

{
	int x ;
	scanf("%d",&x);
	
	if(x > 0){
		printf("1\n");
	}else if(x == 0){
		printf("2\n");
	}else {
		printf("3\n");
	}
	
	return 0;
}
