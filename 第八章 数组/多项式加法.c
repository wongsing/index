#include <stdio.h>
#define MAX_INDEX 101
//系数为1时 该系数不显示
//+ - 要正确
//幂为1时 该幂不显示 
int main()
{
    int pow;    //幂
    int coe;    //系数
    int max = 0;        //存储两个多项式中最大的幂 
    int a[MAX_INDEX] = {0};
    int b[MAX_INDEX] = {0};


    //第一个多项式存入数组a 
    scanf("%d %d",&pow,&coe);
    max = pow;   
    a[pow] = coe;
    while( pow != 0 ){
        scanf("%d %d",&pow,&coe);
        a[pow] = coe;           
    } 



    //第二个多项式存入数组b
    scanf("%d %d",&pow,&coe);
    if( pow > max){
        max = pow;  
    }
    b[pow] = coe;
    while( pow != 0 ){
        scanf("%d %d",&pow,&coe);
        b[pow] = coe;
    } 
//  检测输入 
//  for(int i = 0; i <= max; i++){
//      printf("%d ",b[i]);
//  }
//  printf("\n");


    //输出
    int temp = 1;       //用于判断当前输出的系数是否是第一个 
    int out = 0;        //用于判断结果是否为0 (out==0表示无任何输出流 此时结果为0)
    for( ; max >= 0; max--){
        //如果系数为正数 显示+号
        if( a[max] + b[max] > 0  ){
            //输出的第一个系数无符号 
            if(temp != 1)
                printf("+"); 
            //仅系数不为1时 放输出该系数 
            if( a[max] + b[max] != 1 )
                printf("%d",a[max]+b[max]);
            if( max > 0 )
                printf("x");
            if( max > 1 )
                printf("%d",max);
            temp++;
            out++;
        }else if(a[max] + b[max] <  0) {

            if(a[max] + b[max] != -1){
                printf("%d",a[max]+b[max]);
            }else{
                //当系数为-1时 只输出"-"号
                printf("-");
            }

            if( max > 0 )
                printf("x");
            if( max > 1 )
                printf("%d",max);
            temp++;
            out++;
        }
    } 
    //输出流无任何输出 此时两个多项式的结果为0 
    if( out == 0 ){
        printf("0");
    }
    //当两多项式和为0时 输出0 
    return 0;
}
