#include <stdio.h>
//���������� ��������˳�����飩 
int two(int k , int a [],int len);           //������������ 
int main ()

{
	int a[]={2,4,7,15,24,29,34,39,45,49,58,67,75,82};             //�������鲢�����鼯�ɻ� 
	int len = sizeof(a)/sizeof(a[0]);                             //��������鳤�� 
	int k = 4;                                       
	int r = two(k,a,len);
	if(r>-1){
		printf("%d\n",r);
	}else{
		printf("�Ҳ���\n");
	}
	return 0;
}

int two(int k , int a [],int len)                      //�������� 
{
	int ret = -1;                                   //���÷���ֵ  
	int left = 0 ;                                  //leftΪ��һ�����൱��a[0] 
	int right = len-1 ;                             //rightΪ���һ�����൱�������½Ǳ����һλ 
	while(right>left){                              //������right > left ����left > right ,���Ҳ��� ����-1�� 
		int mid=(left+right)/2;                     //mid �����м��� 
		if(k==a[mid]){                              //�ж�mid�ϵ�ֵ�Ƿ���k��� 
			ret = mid;                              //��ȼ��ҵ�k������mid 
			break;                                   //����ѭ�� 
		}else if(k<a[mid]){                         //���ж� k�Ƿ��midֵС�����ǣ����ұߵ�ȫȥ�� 
			right = mid-1 ;                         //��right�Ƶ�mid-1λ�� 
		}else {                                     //����ж�k�Ƿ��midֵ�����ǣ�����ߵ�ȫȥ�� 
			left = mid+1 ;                          //��left�Ƶ�mid+1λ�� 
		}
	}
	return ret;                                     //����ֵ��main���� 
}
