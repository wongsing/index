#include <stdio.h>

int main()

{
	int n;
	int fact =1;
	
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		fact *=i;
	}
	printf("%d\n",fact);
	return 0;
}
