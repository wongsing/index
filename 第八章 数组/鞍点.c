#include <stdio.h>

int main()

{
	int n ;
	scanf("%d",&n);
	int number[n][n];
	
	int i = 0;
	int j = 0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&number[i][j]);
		}
	}
	
	int max = number[0][0];
	int t = 0 ;
	int m = 0;
	int k,ret;

	ret = -1;
	for(i=0,j=0;i<n;i++){
		for(j=0;j<n;j++){
			if(number[i][0]<number[i][j]){
				t = j;
				}
			}
		for(k=0;k<n;k++){				
			if(number[i][t] > number[k][t]){
			break;
			}else;
	}
		if(k==n){
			printf("%d %d",i,t);
			ret = 1;
		}
	}
		if(ret == -1){
			printf("NO");
		}
	return 0;
}
