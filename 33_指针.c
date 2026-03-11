#include <stdio.h>

int main(){

    int a = 19;

    // 也就是把变量a的地址值赋值给p
    int*     p = &a;  //定义一个指针去指向变量a。

    printf("%d",*p);//用指针去获取刚刚变量a地址中的数据

    *p = 200;       //用指针去存储 、 修改





    return 0;
}