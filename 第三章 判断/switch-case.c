#include <stdio.h>

int main ()

{
	int grade;
	scanf("%d",&grade);
	
	switch (grade /=10){
		case 10:
			printf("����\n");
			break;
		case 9 :
			printf("����\n");
			break;
		case 8 :
			printf("�еȣ�\n");
			break;
		case 7 :
			printf("���ã�\n");
			break;
		case 6 :
			printf("�ϸ�\n");
			break;
		default :
			printf("���ϸ�\n");
	}
	return 0;
}
