#include <stdio.h>

int main ()

{
	int a = 0;
	int b = 0;
	
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	
	int max = a - b;
	 
	if(max < 0){
		printf("%d和%d的最大值是%d。\n", a, b, b);
	}
	else{
		printf("%d和%d的最大值是%d。\n", a, b, a);
	}
	return 0;
	
}
