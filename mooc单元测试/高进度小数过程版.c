#include <stdio.h>
//�߾���С�� 
int Mod(int a, int b ,int mod[]);       //������Mod�������ó���֪������������� 
int main ()

{
	const int number = 200;            //�������鳤��Ϊconst 200�� 
	int mod[number];                   //����һ������mod���飨200���� 
	int a,b;                           // ���� ������ a �� ���� b�� 
	int count,i;                       //����count���ú���Mod��i��֮ǰ�����������飻 
	scanf("%d/%d",&a,&b);              // ���� ������ a /���� b��  
	printf("0.");                      //�����0.֮��ľ���С��λ 
//	for(i=0;i<number;i++){             //���������������Ҫsizeof���鳤�ȣ� 
		count=Mod(a,b,mod);            //����Mod��������ֵ��ȥ�� 
//		printf("%d",mod[i]);
//	}
		
	return 0;
}

int Mod(int a, int b ,int mod[]){        //��������Ϊ int ��Mod������int ��int��int mod[]��--->������; 
	int i,j,k;                           //���� i�������� ��j��������ţ���k�������� 
	j = 0;                               //j ��ʼֵΪ0  ----> mod[0]��ʼ 
	i=10*a;                              //����������10�ٳ��Գ��� 
	for(;j<200;){                        //forѭ��ֻ��j<200 �ж�����   -----> j(max)==199 --->mod[199] 
		k=i/b;                           //�������� 
		i%=b;							//�õ����������������ж� 
//		if(i>9){                        //����������������������9��ȡ���λ 
//		int t=i%10;                     
//		mod[j]=t;                       //��ֵ���������� 
//		printf("mod[%d]=%d\n",j,mod[j]);    //for test 
//		j++;		                    //����һ�����鸳ֵ 
//		}else if(i==0){                 //�ж��Ƿ�����Ϊ0���ǵĻ��򷵻ص�main���� 
//			return ;
//		}
		if(j<=200&&i!=0){                         //�ж�����j������200����������������0������0�ͽ����� 
 		mod[j]=k;                                 //��ֵ���飻 
//		printf("mod[%d]=%d\n",j,mod[j]);          //for test
		printf("%d",mod[j]);                      //������� 
		j++;                                      //j++ ����һ�����鸳ֵ 
		i*=10;                                    //����������10���ٳ��Գ��� 
//		if(i<=b){                        //          
//			mod[j]=0;
//			i*=10;
		//	j++;
//		printf("mod[%d]=%d\n",j,mod[j]);
//			j++;			
//		}
		}else if(i==0) {                          //Ƕ��if-else-if �ж������Ƿ�Ϊ0��Ϊ���޲�ѭ��С�� 
			mod[j]=k;                             //��ֵ���飻 
//		printf("mod[%d]=%d\n",j,mod[j]);		  //for test�� 
		printf("%d",mod[j]);				      //������һλ�� 
			break;                                //����ѭ�� 
		}	
		}
	return 0;                                     //����0�� 
	}



