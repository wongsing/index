#include <stdio.h>

int main ()

{
	const int MINOR = 40;
	
	int age = 0;
	
	printf("������������䣺");
	scanf("%d",&age);
	
	printf("���������%d��\n",age);
	
	if (age < MINOR){
		printf("���������õģ�\n");
	}
	else
	{
	printf("�����������ľ������磬�ú���ϧ�ɣ�\n");
	}
	return 0;
}
