#include <stdio.h>


typedef struct      //这里有别名的话，就可以不写真名了
{ /* * 定义一个结构体类型，包含name和age两个成员 * name是一个字符数组，用于存储名字 * age是一个整型变量，用于存储年龄 */
    char name[100];
    int age;

} q;

/* 主函数入口 */
int main(){

    /* 创建结构体变量 xiaohong，并初始化 name 为 "asd"，age 为 123 */
    q xiaohong = {"asd",123};
    
    q daqiang = {"eee",444};
    
    q zhongxian = {"yyy",666};

    /* 创建结构体数组 arr，包含 3 个元素，分别是 xiaohong、daqiang 和 zhongxian */
    q arr[3] = {xiaohong,daqiang,zhongxian};

    /* 使用 for 循环遍历结构体数组 arr */
    for (int i = 0; i < 3; i++)
    {
        /* 打印每个结构体元素的 name 和 age 字段 */
        printf("%s,%d",arr[i].name , arr[i].age);
    }
    





    /* 程序正常退出，返回 0 */
    return 0;
}