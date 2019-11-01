#include <stdio.h>
//字符串数组表示月份 
int main ()
{
	printf("请输入月份：");
	
//char a[][10]表示每个a[]里都是10字节	
	char a[][10]={"January",
				  "February",
				  "March",
				  "April",
				  "May",
				  "June",
				  "July",
				  "August",
				  "September",
				  "October",
				  "November",
				  "December"};
//char *b[] 表示每个a[]都指向一个字符串 
	char *b[]={"January",
				  "February",
				  "March",
				  "April",
				  "May",
				  "June",
				  "July",
				  "August",
				  "September",
				  "October",
				  "November",
				  "December",
	};
	int x;	
	scanf("%d",&x);
	printf("%s\n",a[x-1]);
	printf("%s\n",b[x-1]);
	return 0;
}
