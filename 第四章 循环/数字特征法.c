#include <stdio.h>
#include <math.h>

int main ()

{
	int num ;      //���� 
	int x = 0;     //��λ 
	int two ;      //�������� 
	int i =0 ;     //��λ�滻ֵ
	int sum1 =0 ;  //������λֵ 
	int Sum = 0;   //�ܺ� 

	scanf("%d",&num);
	
	while(num > 0){
		i = num ;
		i%=10;
		 x++ ;
		 if(i%2 == 0 && x%2 == 0){
		 	two = 1;
		 }else if(i%2 != 0 && x%2 != 0){
		 	two = 1 ;
		 }else{
		 	two = 0 ;
		 }
		 
		 sum1 =  two*pow(2,x-1);
		 num /=10;
		 Sum+=sum1;
		 } 
		 
	printf("%d",Sum);
	
	return 0;
}
