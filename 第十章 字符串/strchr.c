#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char const *argv[])
{
	char s[]="hello";
	char *p=strchr(s,'l');
//	p = strchr(p+1,'l');   寻找第二个字符 
	char c =*p;
	*p = '\0';
	char *t = (char*)malloc(strlen(s)+1);  //拷贝到另一个字符 
	strcpy(t,s);
	printf("%s\n",t);
	printf("%s\n",p);
	free(t);
	*p = c;
	return 0;	
}
