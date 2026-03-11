#include <stdio.h>



// 函数声明：在数组中查找指定数字的索引位置
int chazhao(int arr[], int len , int num);

int main(){

    // 定义并初始化一个有序数组
    int arr[] = {2,34,55,66,88,99,123,333,666};
    // 计算数组长度
    int len=sizeof(arr) / sizeof(int);

    // 要查找的目标数字
    int num = 123;

    // 调用查找函数，获取目标数字的索引位置
    int index =     chazhao(arr,len,num);

    // 输出查找结果
    printf("suoyingwei %d",index);





    // 程序正常结束
    return 0;
}

// 返回值是索引。

// 概述：该函数用于在一个有序数组中查找指定数字的位置，采用二分查找算法实现。

// 参数：

// arr[]：一个整型数组，要求是有序排列的
// len：一个整型数，表示数组的长度
// num：一个整型数，表示要在数组中查找的数字
// 返回值：

// 如果找到目标数字，返回该数字在数组中的索引位置
// 如果未找到目标数字，返回-1
int chazhao(int arr[], int len , int num){

    // min ， max ，mid都是表示的索引
    int min = 0;
    int max = len-1;                         //  定义最大索引初始值为数组长度减1

    while (min <= max)                       //  当最小索引小于等于最大索引时继续循环
    {
        // 这个是确认中间位置
        int mid = (min + max) /2;           //  计算中间位置的索引

        if (arr[mid] < num)                 //  如果中间位置的值小于要查找的值
        {
            min = mid + 1;                  //  调整最小索引到中间位置+1
        }else if (arr[mid] > num)           //  如果中间位置的值大于要查找的值
        {
            max = mid -1;                   //  调整最大索引到中间位置-1

        }else{                              //  如果中间位置的值等于要查找的值
            // 如果==num，就是找到了，就返回对应的索引
            return mid;
        }
           
    }
    // 找不到，返回-1
    return -1;
}