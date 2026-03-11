#include <stdio.h>
// 案例5:回文数(课堂练习)
// 判断一个整数是否为回文数
// 回文数是指正序(从左向右)和倒序(从右向左)读都是一样的整数。
// 例如:121 是回文，而 123 不是。
int main(){

    int number=121;
    int i =0;
    int temp_number=number;
    while (temp_number!=0)
    {
        
        //获取个位
        int temp=temp_number%10;
        //删掉个位
        temp_number=temp_number/10;

        i=i*10  +  temp;
        /* code */
    }

    
    
    printf("%d\n",i);
    printf("%d\n",number);
    if (i==number)
    {
        printf("shihuiwenshu");
        /* code */
    }else{
        printf("bushi");
    }
    

    return 0;
}
