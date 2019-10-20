#include <stdio.h>
 
int main()

{
	int x;
	int m;
	
	scanf("%d",&x);
	m=x+2;
	if(m>7){                       //可将if判断删去，加入case8/9即可 
		m=m-7;
	}else m;
	switch(m){
		case 1:{printf("1");
			break;
		}
		case 2:{printf("2");
			break;
		}
		case 3:{printf("3");
			break;
		}
		case 4:{printf("4");
			break;
		}
		case 5:{printf("5");
			break;
		}
		case 6:{printf("6");
			break;
		}				
		case 7:{printf("7");
			break;
		}
		default:;		
	}
	return 0;
}
