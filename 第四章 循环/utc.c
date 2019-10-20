#include <stdio.h>

int main ()

{
	int bjt;
	int hour1,minute1;
	int hour2,minute2;
	const int time = 800;
	int ahour = 0;
	int aminute = 0;
	int utc = 0;
	
	scanf("%d",&bjt);
	
	hour1 = bjt /100;
	minute1 = bjt % 100;
	
	//printf("hour1Ϊ%d.\n",hour1);
	//printf("minute1Ϊ%d.\n",minute1);
	
	hour2 = time /100;
	minute2 = time % 100;
	
	//printf("hour2Ϊ%d.\n",hour2);
	//printf("minute2Ϊ%d.\n",minute2);
	
	ahour = hour1 - hour2 ;
	aminute = minute1 - minute2 ;
	if(ahour < 0){
		ahour += 24 ;
	}
	if(aminute < 0){
		aminute +=60 ;
		ahour ++;
	}
	
	//printf("ahourΪ%d.\n",ahour);
	//printf("aminuteΪ%d.\n",aminute);
	
    utc = ahour *100 + aminute;
    printf("%d\n",utc);
	return 0;
}
