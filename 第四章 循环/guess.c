#include <stdio.h>

int main()

{
		int number = rand()%100+1;
		int count = 0;
		int a = 0;
		
		printf("���Ѿ������һ��1~100������");
		
		do{
			printf("������1~100������");
			scanf("%d",&a);
			if(a>number){
				printf("�´��ˣ�");
			}else if(a<number){
				printf("��С�ˣ�");
			}
			count++;
			}while(a!=number);
			printf("������%d�ξͲµ��ˣ�\n",count);
			return 0;			
}

