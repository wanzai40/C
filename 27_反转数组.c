#include <stdio.h>
/*
 * 主函数：实现数组的输入、输出和反转功能
 */
int main(){


    // 定义一个包含5个元素的整型数组
    int arr[5]={};
    // 计算数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 循环读取用户输入，填充数组
    for (int i = 0; i < len; i++)
    {
        printf("第%dwei",i+1);
        scanf("%d",&arr[i]);

    }

    for (int i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
    }


    // i从头，j从尾开始，
    // 同时开始向中间走，并互相交换值
    // 当i，j重合或错开就停止
// 定义两个整型变量i和j，i初始化为0，j初始化为数组长度减1
    int i =0;
    int j =len-1;
// 使用while循环，当i小于j时执行循环体
    while (i<j)
    {
    // 定义一个临时变量temp，用于交换数组元素的值
        int temp = arr[i];
    // 将arr[j]的值赋给arr[i]
        arr[i]=arr[j];
    // 将temp中的值赋给arr[j]，完成交换
        arr[j]=temp;
    // i自增，向右移动
        i++;
    // j自减，向左移动
        j--;
    }
    
// 使用for循环遍历数组并打印每个元素
    for (int i = 0; i < len; i++)
    {  // 初始化i为0，当i小于数组长度len时循环，每次循环后i自增
        printf("%d",arr[i]);  // 打印数组当前索引i处的元素
    }
    






    return 0;
}