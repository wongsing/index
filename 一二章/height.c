#include <stdio.h>

int main()

{
	printf("��ֱ�������ߵ�Ӣ��ͳߴ磬"
	        "������\"6 7\"��ʾ6Ӣ��7�ߴ�:");
	        
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	printf("�����%f�ס�\n",
		((foot+inch/12)*0.3048));
    

	return 0;
} 
