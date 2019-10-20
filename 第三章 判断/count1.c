#include <stdio.h>

int main ()

{
	int price = 0;
	int bill = 0;
	
	printf("请输入您的金额（元）：");
	scanf("%d", &price);
	
	printf("请输入您的票面（元）:");
	scanf("%d", &bill);
	if(bill < price){
	printf("不好意思，您的钱不够\n");	
	}
	else
	{
	printf("找您%d元。\n",bill - price);
	}
	
	return 0;
	
	
}
