/*
 * 包含标准输入输出库
 * 包含标准库
 * 包含时间库，用于生成随机数种子
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int hanshu(int arr[] , int num , int len){
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
        
    }
    return 0;



}
/*
 * 主函数：生成并打印一个包含10个不重复随机数的数组
 * 使用srand初始化随机数种子，确保每次运行程序生成的随机数不同
 */
/*
 * 主函数：生成10个不重复的随机数并打印
 * 使用时间作为随机数种子，确保每次运行结果不同
 * 通过循环生成随机数并检查是否已存在，确保不重复
 */
int main(){

    // 使用当前时间作为随机数种子，保证每次运行程序时生成的随机数序列不同
    srand(time(NULL));
    int flag = 1;  // 用于标记生成的随机数是否已存在于数组中

    // 定义一个包含10个元素的整型数组，并初始化为0
    int arr[10]={0};
    // 计算数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 循环生成10个不重复的随机数
    for (int i = 0; i < 10; )
    {
        // 生成1-10之间的随机数
        int num = rand()%10+1;
        // 调用函数检查该数字是否已存在于数组中
        flag = hanshu(arr,num,len);
        // 如果flag为0，表示数字不存在于数组中，可以存入数组
        if (flag==0)
        {
            arr[i]=num;
            i++;
        }

        
    }
    
    // 遍历数组并打印每个元素
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",arr[i]);
    }
    






    return 0;
}