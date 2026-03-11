#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    /* 定义一个包含10个元素的整型数组 */
    int arr[10]={};

    // 
    srand(time(NULL)); //  使用当前时间作为随机数生成器的种子
    // int num = rand() %100 +1; //  生成一个1到100之间的随机数

    for (int i = 1; i <= 10; i++) //  使用for循环生成10个随机数并存入数组
    {
        int num = rand() %100 +1; //  每次循环生成一个新的1到100之间的随机数
        arr[i-1]=num; //  将生成的随机数存入数组，索引为i-1
        printf("%d\n",arr[i-1]); //  打印当前生成的随机数
    }
    
    

    int len = sizeof(arr) / sizeof(arr[0]); //  使用sizeof运算符计算数组长度
    int sum =0; //  初始化sum变量为0，用于存储数组元素的和
    // 求和
    for (int j = 0; j < len; j++) //  初始化j=0，当j小于数组长度时循环，每次循环j自增1
    {
        sum= sum+arr[j]; //  将当前数组元素累加到sum变量中
    }
    

    printf("-------%d",sum);



    // 平均数
    int avg = 0;
    avg = sum / len;
    printf("-------%d",avg);


    // 统计有几个比平均数小
    int count = 0;
     for (int k = 0; k < len; k++) 
    {
        if (arr[k]<avg)
        {
            count++;
        }
        
        
    }
    printf("=====%d",count);

    return 0;
}