#include <stdio.h>

int mod(int a, int b ,int mod[]);
int main ()

{
	const int number = 200;
	int mod[nmber];
	int a,b;
	int count;
	scanf("%d/%d",a,b);
	printf("0.");
	for(i=0;i<=number;i++){
		conut=mod(a,b,mod);
		printf("%d",mod[i]);
	}
		
	return 0;
}

int mod(int a, int b ,int mod[]){
	int i,j;
	j = 0;
	for(;i%b;10*i){
		i%=b;
		if(j<=number){
		mod[j]=i;
		j++;		
		}else break;
	}
	return;
}
