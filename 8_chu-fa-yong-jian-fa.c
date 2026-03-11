// 案例6:两数相除(课堂练习)
// 有两个整数，被除数 dividend 和除数 divisor。
// 将两数相除，要求不使用乘法、除法和取余运算。
// 返回被除数 dividend 除以除数 divisor 得到的商和余数。
// 比如说:两个整数11、3
// 输出结果:商:3
// 余:2
#include <stdio.h>
int main(){

    int a=9,b=3;
    int i=0;
    while (a>=b)
    {
        a=a-b;
        i++;
        /* code */
    }
    

    printf("yushuwei%d\n",a);
     printf("shanwei%d\n",i);


    return 0;
}