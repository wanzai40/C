#include <stdio.h>

int main(){

    int a = 19;

    // 也就是把变量a的地址值赋值给p
    int*     p = &a;  //定义一个指针去指向变量a。

    printf("%d",*p);//用指针去获取刚刚变量a地址中的数据

    *p = 200;       //用指针去存储 、 修改

arr[i]  ≡  *(arr + i)  ≡  p[i]  ≡  *(p + i)

// C语言标准规定：
arr[i] 等价于 *(arr + i)

// 推导过程：
arr[i]  = *(arr + i)    // 定义
p[i]    = *(p + i)      // 同样的规则
arr[i]  = p[i]          // 因为 arr 和 p 指向同一地址

    return 0;
}