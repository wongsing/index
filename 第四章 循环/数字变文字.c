#include <stdio.h>

//念整数 
int main()

{
	int x;                     //输入的整数 
	int i;                     //表示整数有几位数，用来正序分解的值 
	int m;                     //计用来算整数的值 
	scanf("%d",&x);
	m=x;                      //保证输入整数不变 
	
	if(m<0){                  //判断整数是否为负数 
		printf("fu ");         
		m*=(-1);              //使变正进入下次判断 
		x*=(-1);
	}
	for(i=1;m>9;){            //判断整数位数，输出i值 
		m/=10;
		i*=10;
	}

do{
	int t = x / i;            //正序分解，x的值保持不变，得到左边第一位 
	switch(t){                //数字相应输出拼音 
		case 1:printf("yi");
		break;
		case 2:printf("er");
		break;		
		case 3:printf("san");
		break;	
		case 4:printf("si");
		break;	
		case 5:printf("wu");
		break;	
		case 6:printf("liu");
		break;	
		case 7:printf("qi");
		break;	
		case 8:printf("ba");
		break;	
		case 9:printf("jiu");
		break;	
		case 0:printf("ling");
		break;
		default:;	
	}

	x%=i;                        //x整数舍弃左边第一位 
	i/=10;                       //i值相应减小10倍，再进入下次取左边第一位运算 

	if(i>0){                     //为了让最后一位数不输出空格 
		printf(" ");
	}
}while(i>0);                    //当i=0后整数分解完毕，结束！ 
	
	return 0;
}
