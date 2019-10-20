#include <stdio.h>
//时间差 
int main ()

{
	int hour3, min3;                  //终止时间
	int start,use;                    //起始时间和逝去时间 
	int i,j;                          //计算小时变量 
	
	scanf("%d %d",&start,&use);       //输入起始时间和逝去时间 
	
	int hour1 = start / 100 ;         //舍去后两位得到小时 
	int min1 = start % 100 ;          //留下后两位得到分钟 
	int hour2 = use / 60 ;            //将逝去时间换算成小时 
	int min2 = use - 60*hour2;        //得到逝去时间的分钟 
	
	
	hour3 = hour1 + hour2;             //终止时间中小时的和 
	min3 = min1 + min2;                //终止时间中分钟的和 
	
//	while(min3 >= 60 || min3 < 0){       //while循环多余了 
		if(min3>=60){                    //判断分钟是否超60 
		i = min3 / 60;                   //得到超过的小时数 
		min3 = min3 - i *60;             //剩下的分钟数 
		hour3+=i;	                     //加上超过小时数 
	}else if(min3<0){                    //判断分钟是否为负，若为负，需往前减一小时 
		j = min3 / 60;                  //得到负的小时数 
		j--;                            //向前减一小时，补60分钟 
		min3 = min3-j*60;               // 得到补后的分钟数 
		hour3 +=j;                      //加上 负的小时数，相当于提前了j小时 
//		break;
	}	
//}
//	printf("%d %d\n",hour1,min1);
//	printf("%d %d\n",hour2,min2);	
//	printf("%d %d\n",hour3,min3);
	printf("%d\n",hour3*100+min3);       //小时变成百千位，相加变成四位数！ 
	return 0;
}
