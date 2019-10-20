#include <stdio.h>

int main()

{
	int price=0;
	
	printf(" 请输入金额（元）：\n");
	scanf("%d",&price);   /*在键盘输入金额*/ 
	
	int change=100-price;
	
	printf("找您%d元。\n",change);
	
	return 0;
	
}

