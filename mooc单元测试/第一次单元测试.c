#include <stdio.h>

int main ()

{
	
//	int x=1, y=012;     //  0开头为八进制，0X为十六进制！！！ 
//	printf("%d",y*x++);

//	int x = 5;
//	if(x&&1){           表示结果都为真 可等价为x！= 0
//		printf("hello\n");
//	}
	int i=10;
long long t = sizeof(i++);
printf("%d\n", i);
printf("%ld\n",t);
		
	return 0;
}
