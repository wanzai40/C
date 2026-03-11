#include <stdio.h>

/*
 * 主函数：实现冒泡排序算法并输出排序后的数组
 */
/**
 * 冒泡排序算法实现
 * 该程序对一个整型数组进行升序排序，并打印排序结果
 */
int main(){

    // 定义并初始化一个整型数组
    int arr[]= {3,1,5,4,2};
    // 计算数组长度
    int len = sizeof(arr) / sizeof(int);

    // 外层循环：控制排序轮数
    for (int j = 0; j < len - 1 ; j++)
    {
         for (int i = 0; i < len-1 - j; i++)        //“-1”是为了防止索引越界，“-j”是为了提高效率，每次都少循环一次
        {
            // 比较相邻元素，如果前一个元素大于后一个元素，则交换它们的位置
            if (arr[i] > arr[i+1]) 
            {
                // 使用临时变量temp完成两个元素的交换
                int temp = arr[i];
                arr[i] = arr[i+1] ;
                arr[i+1] = temp;
            }
            
        }
    }
    

    // 打印排序后的数组元素，用"-"分隔
   for (int i = 0; i < len; i++)
   {
      printf("%d-",arr[i]);
   }
   
    // 程序正常结束，返回0
    return 0;
}