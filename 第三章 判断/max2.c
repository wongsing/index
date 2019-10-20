#include <stdio.h>

int main ()

{
	int a = 0;
	int b = 0;
	
	printf("请输入两个数：");
	scanf("%d %d",&a, &b);
	
	int max = 0;
	
	if(a < b){max = b;
	}
	else{max = a;
	}
	printf("最大的数是%d。\n",max);
	
	return 0;
}
