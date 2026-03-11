// 案例4:x的平方根
// 给你一个非负整数x，计算并返回x的算术平方根。结果只保留整数部分，小数部分将被舍去。举例:
// 结果:2-----X=4
// 结果:2-----x=8
#include <stdio.h>
int main(){

    int x=16;
    int i=1;
    while (i*i<=x)
    {
        i++;
          printf("%d\n",i);
        /* code */
    }
    printf("%d\n",i-1);



    return 0;
}
