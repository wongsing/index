#include <stdio.h>
//二分搜索法 （仅限于顺序数组） 
int two(int k , int a [],int len);           //声明搜索函数 
int main ()

{
	int a[]={2,4,7,15,24,29,34,39,45,49,58,67,75,82};             //定义数组并且数组集成化 
	int len = sizeof(a)/sizeof(a[0]);                             //计算出数组长度 
	int k = 4;                                       
	int r = two(k,a,len);
	if(r>-1){
		printf("%d\n",r);
	}else{
		printf("找不到\n");
	}
	return 0;
}

int two(int k , int a [],int len)                      //函数声明 
{
	int ret = -1;                                   //设置返回值  
	int left = 0 ;                                  //left为第一个，相当于a[0] 
	int right = len-1 ;                             //right为最后一个，相当于数组下角标最后一位 
	while(right>left){                              //条件是right > left ，当left > right ,则找不到 返回-1； 
		int mid=(left+right)/2;                     //mid 等于中间数 
		if(k==a[mid]){                              //判断mid上的值是否与k相等 
			ret = mid;                              //相等即找到k，返回mid 
			break;                                   //跳出循环 
		}else if(k<a[mid]){                         //再判断 k是否比mid值小，若是，则右边的全去掉 
			right = mid-1 ;                         //将right移到mid-1位置 
		}else {                                     //最后判断k是否比mid值大，若是，则左边的全去掉 
			left = mid+1 ;                          //将left移到mid+1位置 
		}
	}
	return ret;                                     //返回值到main函数 
}
