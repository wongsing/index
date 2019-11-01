#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int number[n][n];
	
	int i=0;
	int j=0;
	int a;
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			scanf("%d",&number[i][j]);
		}
	}
	
	int maxj=0;

	int flag=0;
	for(a=0;a<n;a++){
		for(i=0,j=1;j<n;j++){
			if(number[a][maxj] <number[i][j]){
				maxj=j;
			}
		
		}
		
		for(i=0;i<n;i++){
			if(number[a][maxj] >number[i][maxj]){
				break;
			}
		
		}
		
		if(i ==n){
			printf("%d %d\n",a,maxj);
			flag=1;
		}
		
	}
	
	if(flag==0){
			printf("NO\n");
		}
	return 0;
	
}

