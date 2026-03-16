// 某班级组织野外郊游，
// 想要在ABCD四个最点选择其中一个
// 现在班上有88名同学进行投票，找出投票数最多的最点
// Ps:
// 1，学生投票，用随机数模拟
// 2，如果多个最点投票一样的话，A优先B，B优先于c，C优先于D



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct jingdianpiaoshu          //  定义景点投票数的结构体
{
    char jingdian;              //  景点名称，存储'A'、'B'、'C'或'D'
    int piaoshu;                 //  该景点获得的票数
};


int main(){

    struct jingdianpiaoshu arr[4] ={            //  定义一个结构体数组，用于存储景点和对应的票数
        {'a', 0},                       //  景点a，初始票数为0
        {'b', 0},
        {'c', 0},
        {'d', 0}
    };

    srand(time(NULL));                  //  使用当前时间作为随机数生成器的种子

    for (int i = 0; i < 80; i++)        //  循环80次，模拟80次投票
    {
        int vvv = rand() %4;            //  生成0到3的随机数，作为数组的索引
        arr[vvv].piaoshu++;             //  对应景点的票数加1
    }
    
    for (int i = 0; i < 4; i++)             //  遍历数组，打印每个景点的名称和票数
    {
        printf("%c %d\n",arr[i].jingdian, arr[i].piaoshu);
    }
    

    int max =0;                            //  定义一个变量max，用于存储最大票数，初始值为0
    for (int i = 0; i < 4; i++)            //  遍历数组，找出票数的最大值
    {
        if (arr[i].piaoshu>max)             //  如果当前元素的票数大于当前最大值，则更新最大值
        {
            max = arr[i].piaoshu;
        }
        
    }
    
    printf("%d",max);         //  输出最大票数

    for (int i = 0; i < 4; i++)                   //  再次遍历数组，找到票数等于最大值的元素
    {
        if (arr[i].piaoshu == max)                 //  如果找到票数等于最大值的元素，则输出该元素的景点和票数
        {
            printf("%c %d\n",arr[i].jingdian, arr[i].piaoshu);
            break;                                              //  找到后立即退出循环
        }
        
        
    }
    return 0;
}