#include <stdio.h>

int main ()

{
	int a = 0;
	int b = 0;
	
	printf("��������������");
	scanf("%d %d",&a, &b);
	
	int max = 0;
	
	if(a < b){max = b;
	}
	else{max = a;
	}
	printf("��������%d��\n",max);
	
	return 0;
}
