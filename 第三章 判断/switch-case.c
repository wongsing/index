#include <stdio.h>

int main ()

{
	int grade;
	scanf("%d",&grade);
	
	switch (grade /=10){
		case 10:
			printf("棒！\n");
			break;
		case 9 :
			printf("棒！\n");
			break;
		case 8 :
			printf("中等！\n");
			break;
		case 7 :
			printf("良好！\n");
			break;
		case 6 :
			printf("合格！\n");
			break;
		default :
			printf("不合格！\n");
	}
	return 0;
}
