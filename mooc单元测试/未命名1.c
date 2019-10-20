#include <stdio.h>

int Mod(int a, int b ,int mod[]);
int main ()

{
	const int number = 200;
	int mod[number];
	int a,b;
	int count,i;
	scanf("%d/%d",&a,&b);
	printf("0.");
	for(i=0;i<number;i++){
	    int 
		count=Mod(a,b,mod);
		printf("%d",mod[i]);
	}
		
	return 0;
}

int Mod(int a, int b ,int mod[]){
	int i,j; 
	j = 0;
	i=10*a;
	for(;j<200;){
		i%=b;
		if(i>9){
		int t=i%10;
		mod[j]=t;
//		printf("mod[%d]=%d\n",j,mod[j]);
		j++;		
		}else if(i==0){
			return ;
		}
		if(j<=200&&i<10){
		mod[j]=i;
//		printf("mod[%d]=%d\n",j,mod[j]);
		j++;
		i*=10;
		if(i<=b){
			mod[j]=0;
			i*=10;
		//	j++;
//		printf("mod[%d]=%d\n",j,mod[j]);
			j++;			
		}
		}else {
			i*=10;
		}	
		}
	return mod[j];
	}



