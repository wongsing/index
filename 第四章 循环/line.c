#include <stdio.h>

int main ()

{
	int number;
	int i = 1;
	
	scanf("%d",&number);
	printf("%d",i); 
while(i < number){
	i++;
	if(i %2 == 1){
		printf(" %d",i);
	}	
}
	return 0;
}

