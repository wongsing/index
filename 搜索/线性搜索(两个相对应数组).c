#include <stdio.h>
//��������--->��Ч�� 
//Ѱ�� ��Ԫ��ֵ���� 
int search(int k,int a[],int len);         //�������������� 
int main ()

{
	int amount[]={1,5,10,25,50,};                                             //����һ��a���鲢�Ҽ��ɻ����� 
	char* name[]={"penny","nickel","dime","quarter","halr-dollar",};          //����һ���ַ����鲢�Ҽ��ɻ�����
//�������Ӧ������---->ɢ�б����ݽṹ�� 
	int len = sizeof(amount)/sizeof(amount[0]);                              //lenΪ����Ԫ���������ܳ�����һ��Ԫ���ֽڣ� 
	int k = 10;                                                              //key                    
	int r = search(k,amount,len);                     //����search��������ֵ����������еģ�key��amount���飬���鳤�ȣ� 
	                                                  //���ҷ���ֵret��ȷ��λ�û򲻴��ڣ�sizeof�����ڵ��ú�����ʹ�ã�
	if(r>-1){										  //���ҷ���ֵret��ȷ��λ�û򲻴��ڣ�sizeof�����ڵ��ú�����ʹ�ã� 
	printf("%s\n",name[r]);                           //���amount���Ӧ��name�������ֵ��λ�� 
}   //%s ����ַ��� 
	return 0;
} 

int search(int k, int amount[],int len){          //search ���� 
	int ret = -1;                            //���붨��һ������ֵ 
	int i ;
 	for( i = 0;i<len;i++){                   //�������飬�������Ƿ���key��� 
		if(k==amount[i]){                         //������򷵻�i��ȷ��λ�� 
			ret = i;
			break;                          //����forѭ������return ����ֵ����ѭ ��һ���ڣ� 
		}
	}
	return ret;                             //������򷵻�-1�� 
}
