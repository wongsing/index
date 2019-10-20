#include <stdio.h>

void minmax(int *a, int len,int*min,int*max);
int main(void)
{	
	int a[] = {1,2,3,4,5,6,-1,8,9,12,100,16,17,23,25,66};
	int max,min;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a = %p\n",a);
	minmax(a, sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	int *p = &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);
	return 0;	
}

void minmax(int *a, int len,int*min,int*max)
{
	int i ;
	//*a = 1000;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a = %p\n",a);
	*min = *max =a[0];
	for (i=1; i<len ; i++){
		if(a[i]<*min){
			*min = a[i];
			printf("*min=%d\n",*min);
		}
		if(a[i]>*max){
			*max = a [i];
			printf("*max=%d\n",*max);
		}
	}
}
