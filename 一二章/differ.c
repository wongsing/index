#include <stdio.h>

int main()

{
	int a ;
	printf("��������λ������");
	scanf("%d",&a);
	
	int b,c,d;
	
	b = a % 10 ;
	c = a / 10 % 10 ;
	d = a / 100;
	
	int f;
	f = b *100 + c *10 + d;
	printf("������λ��Ϊ��%d\n",f);
	
	return 0;
}
