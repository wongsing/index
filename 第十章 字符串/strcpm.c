#include <stdio.h>
#include <string.h>

//数组方式 
int mycmp(const char*s1, const char*s2 )
{
	int idx = 0;
	while(s1[idx] == s2[idx] && s1[idx] != '\0'){
//		if(s1[idx] != s2[idx]){
//			break;
//		}else if(s1[idx]=='\0'){
//			break;
//		}
		idx++;
	}
	return s1[idx]- s2[idx];
}

//指针方式 
int youcmp(const char*s1, const char*s2 )
{
	while(*s1==*s2 && *s1 != '\0'){
		*s1++;
		*s2++;
	}
	return *s1 - *s2;
}


int main(int argc , char const *argv[])
{
	char s1[]="abc ";
	char s2[]="Abc";
//	printf("%d\n",s1==s2);  数组不可以比较 这是比较地址 
	printf("strcmp %d\n",strcmp(s1,s2));
	printf("mycmp %d\n",mycmp(s1,s2));	
	printf("youcmp %d\n",youcmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
}
