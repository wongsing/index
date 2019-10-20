#include <stdio.h>
//求素数和 
int main ()
{
	int number;               //素数数量 
	int n,m;                  //起止素数 
	int x;                    //素数变量 
	int cnt;                  //素数排序计数器 
	int sum;                  //素数和 
	int isPrime;              //素数判定条件 
	
	
	scanf("%d %d",&n,&m);
	number =200;              //定义素数个数 
	cnt = 1;                  //素数排序，从1开始计数，因为2是第一个素数 
	x = 2;                    //素数2为已知第一个素数 
	sum=0;                    

for(x=3;cnt<=number;x++){      //让素数递增输入做内层for循环素数判断 
	int i=1;     
	isPrime =1;              //素数的标志 
	for(i=2;i<x;i++){         
		if(x%i==0){          //若能整除除本身的数，则不是素数，赋值0； 
			isPrime=0;
		}
		if(isPrime==1&&i+1==x){     //若都不能整除并且除数为x-1则为素数 
			cnt++;                  //素数序号加一 
			if(cnt>=n&&cnt<=m){     //判断素数序号是否在输入的起止素数内 
				sum+=x;             //素数和相加 
				}
			}
		if(cnt>m){                 //若素数排序大于止素数跳出内层for循环 
				break;
			}
		}
		if(cnt>m)break;            //跳出外层for循环 
	}
	if(n==1){                      //判断起始素数是否为1，加上已知的素数2 
		sum+=2;
	}
	printf("%d",sum);
	
	return 0;
}
