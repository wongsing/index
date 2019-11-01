#include <stdio.h>
#include <string.h>

char *mycat(char *s1 , const char *s2 )
{
	int idx1 = 0;
	int idx2 = 0;
	while(s2[idx2]!='\0'){
		if(s1[idx1]!='\0'){
			idx1++;
//			printf("%s",s1);
		}else if (s1[idx1]=='\0'){
			s1[idx1]=s2[idx2];
			idx1++;
			idx2++;
//			printf("%s",s1);
//			printf("%s",s2);
		}		
	}
	s1[idx1]='\0';
	return s1;
}



int main (int argc , char const* argv)
{
	char s1[20]= "world";
	char  s2[]= "line";
//	printf("%s\n",strcat(s1,s2));
	printf("%s\n",mycat(s1,s2));
	return 0;
}
