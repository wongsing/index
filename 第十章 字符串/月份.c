#include <stdio.h>
//�ַ��������ʾ�·� 
int main ()
{
	printf("�������·ݣ�");
	
//char a[][10]��ʾÿ��a[]�ﶼ��10�ֽ�	
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
//char *b[] ��ʾÿ��a[]��ָ��һ���ַ��� 
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
