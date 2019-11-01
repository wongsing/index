#include <stdio.h>
//定义数据结构来表示两个组合在一起的数组
//线性搜索 
struct{                         //定义一个struct结构，将两个“数组 ” 结合到一起 
	int amount;                 //aomunt 
	char *name;                 //字符变量 
}coins[]={                      //重新定义一个coins数组，将两个结合在一起 
	{1,"penny"},                //对“cache ”会友好 
	{5,"nickel"},
	{10,"dime"},
	{25,"quarter"},
	{50,"half-dollar"},				
};
int main ()

{
	int i ;
	int k =50;
	for(i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
		if(k==coins[i].amount){                 //相对应的coins里的amount用来判断是否与k相等 
			printf("%s\n",coins[i].name);       //若是输出coins里的name 
			break;
		}
	}
	
	
	return 0;
}
