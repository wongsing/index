#include <stdio.h>

int main ()

{
	int a = 0;
	int b = 0;
	
	printf("��������������");
	scanf("%d %d", &a, &b);
	
	int max = a - b;
	 
	if(max < 0){
		printf("%d��%d�����ֵ��%d��\n", a, b, b);
	}
	else{
		printf("%d��%d�����ֵ��%d��\n", a, b, a);
	}
	return 0;
	
}
