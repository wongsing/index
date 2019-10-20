#include <stdio.h>
//日期格式化 
int main()

{
	int x,y,z;                                  //定义 美国日期的日月年 

	scanf("%d %d %d",&x,&y,&z);                 //输入 日-月-年 
	z*=(-1);                                    //将年前的-去掉 
	y*=(-1);                                    //将月前的-去掉 
	if(x<10){                                   //判断日前面是否需要加0 
	if(y<10){                                   //判断月前面是否需要加0 
		printf("%d-0%d-0%d",z,x,y);
	}else{
		printf("%d-0%d-%d",z,x,y);               
	}
}else if(y<10){                                 //在日大于0情况下，判断月前面是否需要加0 
		printf("%d-%d-0%d",z,x,y);
}else {
	printf("%d-%d-%d",z,x,y);
}
	return 0;
}
