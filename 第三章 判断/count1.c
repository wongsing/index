#include <stdio.h>

int main ()

{
	int price = 0;
	int bill = 0;
	
	printf("���������Ľ�Ԫ����");
	scanf("%d", &price);
	
	printf("����������Ʊ�棨Ԫ��:");
	scanf("%d", &bill);
	if(bill < price){
	printf("������˼������Ǯ����\n");	
	}
	else
	{
	printf("����%dԪ��\n",bill - price);
	}
	
	return 0;
	
	
}
