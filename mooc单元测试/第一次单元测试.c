#include <stdio.h>

int main ()

{
	
//	int x=1, y=012;     //  0��ͷΪ�˽��ƣ�0XΪʮ�����ƣ����� 
//	printf("%d",y*x++);

//	int x = 5;
//	if(x&&1){           ��ʾ�����Ϊ�� �ɵȼ�Ϊx��= 0
//		printf("hello\n");
//	}
	int i=10;
long long t = sizeof(i++);
printf("%d\n", i);
printf("%ld\n",t);
		
	return 0;
}
