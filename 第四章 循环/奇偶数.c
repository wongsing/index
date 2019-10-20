#include <stdio.h>

int main()

{
	int x ;
	int jcnt , ocnt ;
	
	scanf("%d",&x);
	
	jcnt = 0;
	ocnt = 0;
	while(x >= 0){
		if(x%2==0){
			ocnt ++;
		}else{
			jcnt ++;
		}
		scanf("%d",&x);
		if(x==1){
			break;
		}
	}
	printf("%d %d\n",jcnt,ocnt);
	return 0;
}
