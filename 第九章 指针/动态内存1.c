#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int* a ;
	int i;
	printf(" ‰»Î ˝¡ø:");
	scanf("%d",&number);
	// a[number];
	a = (int*)malloc(number*sizeof(int));
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
	free(a);
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(a));
	return 0;
}
