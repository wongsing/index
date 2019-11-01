#include <stdio.h>
#include <string.h>
//数组版本 
char* mycpy(char* dst , const char* src)
{
	int idx = 0;
	while(src[idx] != '\0'){
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx]='\0';
	return dst;
}
//指针版本 
char* youcpy(char* dst , const char* src)
{
	char* rest = dst;
//	while(*dst++= *src++)
	while( *src ){
	*dst++= *src++;
//	*dst++;
//	*src++;
	}
	*dst='\0';
	return rest;
}


int main(int argc , char const *argv[])
{
	char s1[]="abc";
	char s2[]="abc";
	strcpy(s1,s2);
	return 0;
}
