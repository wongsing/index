#include <stdio.h>

int main ()

{
	int a;
	int b;
	int t;
	int gcd;
	
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t = a % b ;
		a = b ;
		b = t ;
		printf("a=%d,b+%d,t=%d\n",a,b,t);
	}
	printf("gcd=%d\n",gcd=a);
	
	return 0;
}
