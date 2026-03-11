//1的1次方 + 2的2次方 + 3的3次方 +...+ 10的10次
#include <stdio.h>
int main(){

    long long count=0;
    //外循环：数字
    for (int i = 1; i <=10; i++)
    {
        //cifan：当前i的i次方的结果
        long long cifan=1;
        //内循环：次幂，也就是乘几次
        for (int  a = 1; a <=i; a++)
        {
            //进入到这个for循环后i为固定的，直到a>i结束
            //假如i=4，也就是4的4次方幂
            //1=1*4
            //4=4*4
            //16=16*4
            //64=64*4
            //所以cifan=1*4*4*4*4=256
            cifan=cifan*i;
        }
        

        count=count+cifan;


    }
    //longlong是lld
    printf("%lld",count);


    return 0;
}