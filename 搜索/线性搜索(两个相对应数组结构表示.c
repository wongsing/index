#include <stdio.h>
//�������ݽṹ����ʾ���������һ�������
//�������� 
struct{                         //����һ��struct�ṹ�������������� �� ��ϵ�һ�� 
	int amount;                 //aomunt 
	char *name;                 //�ַ����� 
}coins[]={                      //���¶���һ��coins���飬�����������һ�� 
	{1,"penny"},                //�ԡ�cache �����Ѻ� 
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"},				
};
int main ()

{
	int i ;
	int k =50;
	for(i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if(k==coins[i].amount){                 //���Ӧ��coins���amount�����ж��Ƿ���k��� 
			printf("%s\n",coins[i].name);       //�������coins���name 
			break;
		}
	}
	
	
	return 0;
}
