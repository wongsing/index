#include <stdio.h>

//������ 
int main()

{
	int x;                     //��������� 
	int i;                     //��ʾ�����м�λ������������ֽ��ֵ 
	int m;                     //��������������ֵ 
	scanf("%d",&x);
	m=x;                      //��֤������������ 
	
	if(m<0){                  //�ж������Ƿ�Ϊ���� 
		printf("fu ");         
		m*=(-1);              //ʹ���������´��ж� 
		x*=(-1);
	}
	for(i=1;m>9;){            //�ж�����λ�������iֵ 
		m/=10;
		i*=10;
	}

do{
	int t = x / i;            //����ֽ⣬x��ֵ���ֲ��䣬�õ���ߵ�һλ 
	switch(t){                //������Ӧ���ƴ�� 
		case 1:printf("yi");
		break;
		case 2:printf("er");
		break;		
		case 3:printf("san");
		break;	
		case 4:printf("si");
		break;	
		case 5:printf("wu");
		break;	
		case 6:printf("liu");
		break;	
		case 7:printf("qi");
		break;	
		case 8:printf("ba");
		break;	
		case 9:printf("jiu");
		break;	
		case 0:printf("ling");
		break;
		default:;	
	}

	x%=i;                        //x����������ߵ�һλ 
	i/=10;                       //iֵ��Ӧ��С10�����ٽ����´�ȡ��ߵ�һλ���� 

	if(i>0){                     //Ϊ�������һλ��������ո� 
		printf(" ");
	}
}while(i>0);                    //��i=0�������ֽ���ϣ������� 
	
	return 0;
}
