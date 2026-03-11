#include <stdio.h>

void  func1()
{
    printf("func1\n");
}

int func2(int a , int b)
{
    printf("func2\n");
    return a + b;
    
}





int main(){

    //定义指针指向函数
    //函数指针的格式：返回值类型 (*指针变量名)(参数列表)
    //void  func1() ->删掉函数名，加上括号，括号里写指针的名字，再加上*号，后面再给它赋值函数名
    void (*p1)() = func1;
    int (*p2)(int , int) = func2;

    //利用函数指针去调用函数
    p1();
    int num = p2(1,2);
    printf("%d\n",num);




    return 0;
}