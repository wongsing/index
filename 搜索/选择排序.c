#include <stdio.h>
//ѡ����������������  
//˼·���ҳ����ģ�Ȼ�������ұߵ��������λ�ã��編���� 
int max(int a[],int len);
int main()

{
	int a[]={2,45,32,85,64,98,21,48,25};                //�������鲢�Ҽ��ɻ� 
	int len =sizeof(a)/sizeof(a[0]);       
	int i ;
	for(i=len-1;i>0;i--){                           // ����һ��forѭ���������е���λ�� 
	//i��ʼ��Ϊ���������½Ǳ꣬�𽥵ݼ���ֱ��i=0����ѭ�� 
		int maxid=max(a,i+1);                       //�õ�maxid��λ�� �� 
		//a[maxid] ,[len-1]               
		int t = a[maxid];                           //�����滻�������ұߵĽ����滻 
		a[maxid]=a[i];
		a[i]=t;
	}
	for(i=0;i<len;i++){                    //����������� 
		printf("%d ",a[i]);
	}	
		return 0;
}

int max(int a[],int len){                      //����һ������ 
	int maxid = 0;                             //�����ֵ����a��0��Ȼ��һ�����Ƚ� 
	int i ;	 
	for(i=1;i <len;i++){
		if(a[i]>a[maxid]){                     //����ҵ���a[maxid]Ҫ�������maxid��λ�� 
 			maxid=i;
		}
	}
	return maxid;
}
