#include <stdio.h>
//ʱ��� 
int main ()

{
	int hour3, min3;                  //��ֹʱ��
	int start,use;                    //��ʼʱ�����ȥʱ�� 
	int i,j;                          //����Сʱ���� 
	
	scanf("%d %d",&start,&use);       //������ʼʱ�����ȥʱ�� 
	
	int hour1 = start / 100 ;         //��ȥ����λ�õ�Сʱ 
	int min1 = start % 100 ;          //���º���λ�õ����� 
	int hour2 = use / 60 ;            //����ȥʱ�任���Сʱ 
	int min2 = use - 60*hour2;        //�õ���ȥʱ��ķ��� 
	
	
	hour3 = hour1 + hour2;             //��ֹʱ����Сʱ�ĺ� 
	min3 = min1 + min2;                //��ֹʱ���з��ӵĺ� 
	
//	while(min3 >= 60 || min3 < 0){       //whileѭ�������� 
		if(min3>=60){                    //�жϷ����Ƿ�60 
		i = min3 / 60;                   //�õ�������Сʱ�� 
		min3 = min3 - i *60;             //ʣ�µķ����� 
		hour3+=i;	                     //���ϳ���Сʱ�� 
	}else if(min3<0){                    //�жϷ����Ƿ�Ϊ������Ϊ��������ǰ��һСʱ 
		j = min3 / 60;                  //�õ�����Сʱ�� 
		j--;                            //��ǰ��һСʱ����60���� 
		min3 = min3-j*60;               // �õ�����ķ����� 
		hour3 +=j;                      //���� ����Сʱ�����൱����ǰ��jСʱ 
//		break;
	}	
//}
//	printf("%d %d\n",hour1,min1);
//	printf("%d %d\n",hour2,min2);	
//	printf("%d %d\n",hour3,min3);
	printf("%d\n",hour3*100+min3);       //Сʱ��ɰ�ǧλ����ӱ����λ���� 
	return 0;
}
