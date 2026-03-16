#include <stdio.h>
#include <string.h>


// 结构体作为函数参数
    // 函数中可以传递结构体
// 两种情况:
    // 传递结构体中的数据值     直接传递，不会影响原本的
    // 传递结构体的地址值       因为内存地址，所以原本的也跟着一起改变




typedef struct aaa
{
    char name[100];
    int age;
    

} q;

// 如果要在函数中修改a1的值，此时就不要再定义新的变量了  void xiugai(q xiugaia1)
// 直接接收a1的内存地址，通过内存地址就可以修改a1中的数据了
// 指针p里面记录的是main函数中a1的内存地址


void xiugai(q* p){
    printf("输入");
    scanf("%s", (*p).name);          //*p解引用，也就是主函数中a1            //xiugaia1.name已经是内存地址了，不需要&, 因为name是个数组，它在参与计算时会退化为指向第一个元素的指针
  
    printf("输入");
    scanf("%d", &((*p).age));                     //age不是个数组，要& 获取内存地址
  
    printf("%s,--%d", (*p).name , (*p).age);
};

int main(){
    
    q a1 = {"asd阿萨德" , 123}; //  创建并初始化一个结构体变量a1，包含name和age两个成员
   

    printf("%s,--%d",a1.name,a1.age);
   
    xiugai(&a1); //  调用xiugai函数，把a1的地址传递过去             传入结构体变量a1的内存地址作为参数

printf("%s,--%d",a1.name,a1.age);


    return 0;
}