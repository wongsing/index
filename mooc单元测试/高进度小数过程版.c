#include <stdio.h>
//高精度小数 
int Mod(int a, int b ,int mod[]);       //先声明Mod函数，让程序知道有这个函数！ 
int main ()

{
	const int number = 200;            //定义数组长度为const 200； 
	int mod[number];                   //定义一个余数mod数组（200）； 
	int a,b;                           // 定义 被除数 a ； 除数 b； 
	int count,i;                       //定义count调用函数Mod，i是之前用来遍历数组； 
	scanf("%d/%d",&a,&b);              // 输入 被除数 a /除数 b；  
	printf("0.");                      //先输出0.之后的就是小数位 
//	for(i=0;i<number;i++){             //遍历数组输出，需要sizeof数组长度！ 
		count=Mod(a,b,mod);            //调用Mod函数，传值进去； 
//		printf("%d",mod[i]);
//	}
		
	return 0;
}

int Mod(int a, int b ,int mod[]){        //定义类型为 int 的Mod函数（int ，int，int mod[]）--->参数表; 
	int i,j,k;                           //定义 i（余数） ，j（数组序号），k（除数） 
	j = 0;                               //j 初始值为0  ----> mod[0]开始 
	i=10*a;                              //用余数乘以10再除以除数 
	for(;j<200;){                        //for循环只有j<200 判断条件   -----> j(max)==199 --->mod[199] 
		k=i/b;                           //输出结果； 
		i%=b;							//得到余数；进行以下判断 
//		if(i>9){                        //以余数输出，如果余数大于9则取余个位 
//		int t=i%10;                     
//		mod[j]=t;                       //赋值余数给数组 
//		printf("mod[%d]=%d\n",j,mod[j]);    //for test 
//		j++;		                    //向下一个数组赋值 
//		}else if(i==0){                 //判断是否余数为0；是的话则返回到main函数 
//			return ;
//		}
		if(j<=200&&i!=0){                         //判断条件j不超过200，并且余数不等于0，等于0就结束！ 
 		mod[j]=k;                                 //赋值数组； 
//		printf("mod[%d]=%d\n",j,mod[j]);          //for test
		printf("%d",mod[j]);                      //输出数组 
		j++;                                      //j++ 向下一个数组赋值 
		i*=10;                                    //让余数乘以10，再除以除数 
//		if(i<=b){                        //          
//			mod[j]=0;
//			i*=10;
		//	j++;
//		printf("mod[%d]=%d\n",j,mod[j]);
//			j++;			
//		}
		}else if(i==0) {                          //嵌套if-else-if 判断余数是否为0；为有限不循环小数 
			mod[j]=k;                             //赋值数组； 
//		printf("mod[%d]=%d\n",j,mod[j]);		  //for test； 
		printf("%d",mod[j]);				      //输出最后一位数 
			break;                                //跳出循环 
		}	
		}
	return 0;                                     //返回0！ 
	}



