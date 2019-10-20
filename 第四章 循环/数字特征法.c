#include <stdio.h>
#include <math.h>

int main ()

{
	int num ;      //数字 
	int x = 0;     //数位 
	int two ;      //二进制数 
	int i =0 ;     //数位替换值
	int sum1 =0 ;  //二进制位值 
	int Sum = 0;   //总和 

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
