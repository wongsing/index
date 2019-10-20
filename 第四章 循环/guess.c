#include <stdio.h>

int main()

{
		int number = rand()%100+1;
		int count = 0;
		int a = 0;
		
		printf("我已经想好了一个1~100的数。");
		
		do{
			printf("请猜这个1~100的数：");
			scanf("%d",&a);
			if(a>number){
				printf("猜大了！");
			}else if(a<number){
				printf("猜小了！");
			}
			count++;
			}while(a!=number);
			printf("你用了%d次就猜到了！\n",count);
			return 0;			
}

