#include <stdio.h>
//��������--->��Ч�� 
//Ѱ�� key  
int search(int k,int a[],int len);         //�������������� 
int main ()

{
	int a[]={2,6,8,16,32,48,64,1,5,3,};          //����һ��a���鲢�Ҽ��ɻ����� 
	int len = sizeof(a)/sizeof(a[0]);            //lenΪ����Ԫ���������ܳ�����һ��Ԫ���ֽڣ� 
	int k = 64;                                  //key �ؼ���                    
	int r = search(k,a,len);                     //����search��������ֵ����������еģ�key��a���飬���鳤�ȣ� 
												 //���ҷ���ֵret��ȷ��λ�û򲻴��ڣ�sizeof�����ڵ��ú�����ʹ�ã� 
	printf("%d \n",r);                            
	
	return 0;
} 

int search(int k, int a[],int len){          //search ���� 
	int ret = -1;                            //���붨��һ������ֵ 
	int i ;
 	for( i = 0;i<len;i++){                   //�������飬�������Ƿ���key��� 
		if(k==a[i]){                         //������򷵻�i��ȷ��λ�� 
			ret = i;
			break;                          //����forѭ������return ����ֵ����ѭ ��һ���ڣ� 
		}
	}
	return ret;                             //������򷵻�-1�� 
}
