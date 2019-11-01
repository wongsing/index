#include <stdio.h>
//多项式加法 
//需要考虑系数正负
//系数为1、-1、0的情况 

int main()

{
	int a[101] = {0};  //最高幂次100，加上0次，所以长度定义为101 
	int b[101] = {0};
	int x;   //幂次 
	int y;   //系数
	int max; //最高次幂 
	max = 0;
	//输入第一个多项式 
	scanf("%d %d",&x,&y); 
	max = x;   //第一行必定是最高次幂 
	a[x]+=y;
		
	do{
		scanf("%d %d",&x,&y);  
		a[x]+=y;	//幂次相当于数组下角标，系数相当于数组值	
	}while(x !=0);  //幂次等于输入结束 
	
	//输入第二个多项式 		
	do{
		scanf("%d %d",&x,&y);
		b[x]+=y;
		if(x>max){   //判断第二个多项式的最高次幂是否比第一个大 
			max=x;
		}		
	}while(x !=0);
	
//	int i ;
//	for(i=max;i>0;i--){
//	printf("%d %d\n",i,number[i]);

	int m;    //判断系数是否为第一个幂 
	int n;   //判断是否输出为0 
	m = 1;
	n = 0;
//	printf("%d\n",a[max]+b[max]);
	for(;max>=0;max--){
		//判断第一个系数前面的符号是否为正负 
		if(a[max]+b[max]>0){
			if(m!=1){
				printf("+");
		//让第一个数前不加“+ ” 		
			}
			if(a[max]+b[max]!=1){
				printf("%d",a[max]+b[max]);
		//如果系数不等于1则输出系数 
			}else {
				printf("");
		//如果系数等于1则不输出东西
		//这里调试我很久了 。。	
			}
			if(max > 0){
				printf("x");
		//幂次不等于0则输出x			
			}
		//然后输出幂次 
			if(max > 1){
				printf("%d",max);
			}
				m++;  //让输出+号 
				n++;  //用来统计跳出循环后做是否和为0的判断 
			}else if(a[max]+b[max]<0){  
			// 小于0则需要判断系数是否为-1 
			if(a[max]+b[max]!=-1){
				printf("%d",a[max]+b[max]);
			}else{
				printf("-");
			}
			if(max > 0){
				printf("x");
			}
			if(max > 1){
				printf("%d",max);
			}
				m++;
				n++;
			
			}

		}				
			//用来判断系数和为0，则输出那个0	
			if(n==0){
				printf("0");
			}
			return 0;

	}


