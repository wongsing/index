#include <stdio.h>
//选择排序（适用于乱序）  
//思路先找出最大的，然后与最右边的数组调换位置，如法炮制 
int max(int a[],int len);
int main()

{
	int a[]={2,45,32,85,64,98,21,48,25};                //定义数组并且集成化 
	int len =sizeof(a)/sizeof(a[0]);       
	int i ;
	for(i=len-1;i>0;i--){                           // 定义一个for循环，来进行调换位置 
	//i初始化为数组最大的下角标，逐渐递减，直到i=0跳出循环 
		int maxid=max(a,i+1);                       //得到maxid的位置 ， 
		//a[maxid] ,[len-1]               
		int t = a[maxid];                           //进行替换，与最右边的进行替换 
		a[maxid]=a[i];
		a[i]=t;
	}
	for(i=0;i<len;i++){                    //遍历数组输出 
		printf("%d ",a[i]);
	}	
		return 0;
}

int max(int a[],int len){                      //定义一个函数 
	int maxid = 0;                             //让最大值等于a【0】然后一个个比较 
	int i ;	 
	for(i=1;i <len;i++){
		if(a[i]>a[maxid]){                     //如果找到比a[maxid]要大，则输出maxid的位置 
 			maxid=i;
		}
	}
	return maxid;
}
