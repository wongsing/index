#include <stdio.h>

int main ()

{
	int sum =0;
	int count = 0;
	int number;
	
	scanf("%d",&number);
	
	while (number != -1){
		sum += number ;
		count ++;
		scanf("%d",&number);}	

	double dsum = sum;
	printf("%f\n",dsum/count);
	return 0;
}
