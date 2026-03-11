#include <stdio.h>

/*
 * 函数：zui (最值函数)
 * 作用：找出数组中的最小值和最大值
 * 参数说明：
 *   arr[] - 输入的整数数组
 *   len - 数组的长度
 *   min - 指向最小值变量的指针（用于返回最小值）
 *   max - 指向最大值变量的指针（用于返回最大值）
 * 
 * 为什么这样设计：C语言函数只能返回一个值，但通过指针参数可以"返回"多个值
 * 这种做法在C语言中非常常见，可以避免使用全局变量
 */
void zui(int arr[] , int len , int* min , int* max)
{
    // 初始化最小值：假设第一个元素是最小的
    // 为什么要这样做：需要一个基准值来比较，否则无法开始比较过程
    *min = arr[0];

    // 遍历数组查找最小值
    // 为什么要遍历：必须检查每个元素才能确保找到真正的最小值
    for (int i = 0; i < len; i++)       //这里的i=0可以写成1，因为上面的是用索引为0去比较的
    {
        // 如果当前元素比记录的最小值还小，就更新最小值
        // 为什么要判断：需要找出更小的值，这是寻找最小值的基本逻辑
        if (*min > arr[i])
        {
            *min = arr[i];  // 更新最小值
        }
    }
    
    // 初始化最大值：假设第一个元素是最大的
    // 为什么要这样做：同样需要基准值开始比较
    *max = arr[0];

    // 遍历数组查找最大值
    for (int i = 0; i < len; i++)
    {
        // 如果当前元素比记录的最大值还大，就更新最大值
        if (*max < arr[i])
        {
            *max = arr[i];  // 更新最大值
        }
    }
    // 不需要返回值：通过指针参数直接修改了main函数中的变量
}

int main(){
    // 测试数组
    int arr[]={1,2,3,4,5};
    
    // 计算数组长度
    // 为什么这样计算：sizeof(arr)是整个数组的字节大小，除以单个元素的字节大小得到元素个数
    int len = sizeof(arr) / sizeof(int);

    // 定义变量用于接收最小值和最大值
    int min;
    int max;

    // 调用函数，传递数组和指针
    // 为什么传递地址(&min, &max)：这样函数可以直接修改这些变量的值
    zui(arr , len , &min , &max);

    // 输出结果
    printf("min:%d",min);  // 输出最小值
    printf("max:%d",max);  // 输出最大值

    return 0;
}

/*
 * 程序执行过程：
 * 1. 定义数组 arr = [1,2,3,4,5]
 * 2. 计算数组长度 len = 5
 * 3. 定义变量 min 和 max（此时它们的值未初始化）
 * 4. 调用 zui 函数，传递数组和变量地址
 * 5. 在 zui 函数中：
 *    - 先找出最小值 1
 *    - 再找出最大值 5
 *    - 通过指针直接修改 main 中的 min 和 max
 * 6. 返回 main 后，打印结果
 * 
 * 这种设计模式的优势：
 * 1. 可以返回多个值
 * 2. 避免了全局变量的使用
 * 3. 函数职责单一，只做查找最值的工作
 */







/* #include <stdio.h>

// 作用：可以给函数返回多个值
void zui(int arr[] , int len , int* min , int* max)
{
    // 先创建一个用于进行对比的
    *min = arr[0];

    for (int i = 0; i < len; i++)
    {
         if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
    

   
    // 先创建一个用于进行对比的
    *max = arr[0];

    for (int i = 0; i < len; i++)
    {
         if (*max < arr[i])
        {
            *max = arr[i];
        }
    }
    // 不需要返回值

}

int main(){

    int arr[]={1,2,3,4,5};
    int len = sizeof(arr) / sizeof(int);

    int min;
    int max;

    zui(arr , len , &min , &max);

    printf("min:%d",min);
    printf("max:%d",max);



    return 0;
} */