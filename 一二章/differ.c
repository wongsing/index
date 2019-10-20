#include <stdio.h>

int main()

{
	int a ;
	printf("请输入三位整数：");
	scanf("%d",&a);
	
	int b,c,d;
	
	b = a % 10 ;
	c = a / 10 % 10 ;
	d = a / 100;
	
	int f;
	f = b *100 + c *10 + d;
	printf("逆序三位数为：%d\n",f);
	
	return 0;
}
