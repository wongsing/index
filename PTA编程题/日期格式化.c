#include <stdio.h>
//���ڸ�ʽ�� 
int main()

{
	int x,y,z;                                  //���� �������ڵ������� 

	scanf("%d %d %d",&x,&y,&z);                 //���� ��-��-�� 
	z*=(-1);                                    //����ǰ��-ȥ�� 
	y*=(-1);                                    //����ǰ��-ȥ�� 
	if(x<10){                                   //�ж���ǰ���Ƿ���Ҫ��0 
	if(y<10){                                   //�ж���ǰ���Ƿ���Ҫ��0 
		printf("%d-0%d-0%d",z,x,y);
	}else{
		printf("%d-0%d-%d",z,x,y);               
	}
}else if(y<10){                                 //���մ���0����£��ж���ǰ���Ƿ���Ҫ��0 
		printf("%d-%d-0%d",z,x,y);
}else {
	printf("%d-%d-%d",z,x,y);
}
	return 0;
}
