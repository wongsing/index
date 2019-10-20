#include <stdio.h>

int main()

{
	printf("请分别输入身高的英寸和尺寸，"
	        "如输入\"6 7\"表示6英寸7尺寸:");
	        
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	printf("身高是%f米。\n",
		((foot+inch/12)*0.3048));
    

	return 0;
} 
