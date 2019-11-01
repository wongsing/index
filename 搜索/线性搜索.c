#include <stdio.h>
//线性搜索--->无效率 
//寻找 key  
int search(int k,int a[],int len);         //声明搜索函数！ 
int main ()

{
	int a[]={2,6,8,16,32,48,64,1,5,3,};          //定义一个a数组并且集成化数组 
	int len = sizeof(a)/sizeof(a[0]);            //len为数组元素总数（总长除以一个元素字节） 
	int k = 64;                                  //key 关键词                    
	int r = search(k,a,len);                     //调用search函数，传值进入参数表中的（key，a数组，数组长度） 
												 //并且返回值ret，确认位置或不存在，sizeof不能在调用函数中使用！ 
	printf("%d \n",r);                            
	
	return 0;
} 

int search(int k, int a[],int len){          //search 函数 
	int ret = -1;                            //必须定义一个返回值 
	int i ;
 	for( i = 0;i<len;i++){                   //遍历数组，用来看是否与key相等 
		if(k==a[i]){                         //若相等则返回i，确认位置 
			ret = i;
			break;                          //跳出for循环，用return 返回值，遵循 单一出口！ 
		}
	}
	return ret;                             //不相等则返回-1！ 
}
