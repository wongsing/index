#include <stdio.h>
//线性搜索--->无效率 
//寻找 美元面值计算 
int search(int k,int a[],int len);         //声明搜索函数！ 
int main ()

{
	int amount[]={1,5,10,25,50,};                                             //定义一个a数组并且集成化数组 
	char* name[]={"penny","nickel","dime","quarter","halr-dollar",};          //定义一个字符数组并且集成化数组
//两个相对应的数组---->散列表（数据结构） 
	int len = sizeof(amount)/sizeof(amount[0]);                              //len为数组元素总数（总长除以一个元素字节） 
	int k = 10;                                                              //key                    
	int r = search(k,amount,len);                     //调用search函数，传值进入参数表中的（key，amount数组，数组长度） 
	                                                  //并且返回值ret，确认位置或不存在，sizeof不能在调用函数中使用！
	if(r>-1){										  //并且返回值ret，确认位置或不存在，sizeof不能在调用函数中使用！ 
	printf("%s\n",name[r]);                           //输出amount相对应的name数组的面值单位！ 
}   //%s 输出字符串 
	return 0;
} 

int search(int k, int amount[],int len){          //search 函数 
	int ret = -1;                            //必须定义一个返回值 
	int i ;
 	for( i = 0;i<len;i++){                   //遍历数组，用来看是否与key相等 
		if(k==amount[i]){                         //若相等则返回i，确认位置 
			ret = i;
			break;                          //跳出for循环，用return 返回值，遵循 单一出口！ 
		}
	}
	return ret;                             //不相等则返回-1！ 
}
