#include <stdio.h>

int main()

{
	int x ;
	int i =1 ;
	
	
	scanf("%d",&x);
	int c = x;
	while(c>9){
		c/=10;
		i*=10;
	}
	
		//printf("%d",i);
		int t = x;
	do{
		if(i > 0){
			int d = t / i ;
			printf("%d ",d);
		}
			t%=i; 
			i/=10;		
	}while(i>0);
	return 0;
}
