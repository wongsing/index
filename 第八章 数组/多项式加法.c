#include <stdio.h>
#define MAX_INDEX 101
//ϵ��Ϊ1ʱ ��ϵ������ʾ
//+ - Ҫ��ȷ
//��Ϊ1ʱ ���ݲ���ʾ 
int main()
{
    int pow;    //��
    int coe;    //ϵ��
    int max = 0;        //�洢��������ʽ�������� 
    int a[MAX_INDEX] = {0};
    int b[MAX_INDEX] = {0};


    //��һ������ʽ��������a 
    scanf("%d %d",&pow,&coe);
    max = pow;   
    a[pow] = coe;
    while( pow != 0 ){
        scanf("%d %d",&pow,&coe);
        a[pow] = coe;           
    } 



    //�ڶ�������ʽ��������b
    scanf("%d %d",&pow,&coe);
    if( pow > max){
        max = pow;  
    }
    b[pow] = coe;
    while( pow != 0 ){
        scanf("%d %d",&pow,&coe);
        b[pow] = coe;
    } 
//  ������� 
//  for(int i = 0; i <= max; i++){
//      printf("%d ",b[i]);
//  }
//  printf("\n");


    //���
    int temp = 1;       //�����жϵ�ǰ�����ϵ���Ƿ��ǵ�һ�� 
    int out = 0;        //�����жϽ���Ƿ�Ϊ0 (out==0��ʾ���κ������ ��ʱ���Ϊ0)
    for( ; max >= 0; max--){
        //���ϵ��Ϊ���� ��ʾ+��
        if( a[max] + b[max] > 0  ){
            //����ĵ�һ��ϵ���޷��� 
            if(temp != 1)
                printf("+"); 
            //��ϵ����Ϊ1ʱ �������ϵ�� 
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
                //��ϵ��Ϊ-1ʱ ֻ���"-"��
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
    //��������κ���� ��ʱ��������ʽ�Ľ��Ϊ0 
    if( out == 0 ){
        printf("0");
    }
    //��������ʽ��Ϊ0ʱ ���0 
    return 0;
}
