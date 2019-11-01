#include <stdio.h>
#include <string.h>
//自己创建strlen 
size_t mylen(const char *s){
	int idx = 0;
	while(s[idx]!='\0'){
		idx++;
	}
	return idx;
}


int main(int argc , char const* argv[])
{
	char line[]="Hello";
	printf("mylen=%lu\n",mylen(line));
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	return 0;
}
