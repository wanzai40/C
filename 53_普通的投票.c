// 某班级组织野外郊游，
// 想要在ABCD四个最点选择其中一个
// 现在班上有88名同学进行投票，找出投票数最多的最点
// Ps:
// 1，学生投票，用随机数模拟
// 2，如果多个最点投票一样的话，A优先B，B优先于c，C优先于D



#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    int jingdianpiaoshu[4] = {0};       //  定义一个整型数组，用于存储4个景点的票数，初始值为0

    srand((unsigned int)time(NULL));    //  使用当前时间作为随机数生成器的种子，确保每次运行程序时生成的随机数不同

    for (int i = 0; i < 80; i++)        //  循环80次，模拟80张票的分配
    {
        int vvv = rand() %4;            //  生成0到3之间的随机数，代表随机分配到一个景点
        jingdianpiaoshu[vvv]++;         //  对应景点的票数加1
    }
    
   printf("A: %d\nB: %d\nC: %d\nD: %d\n", jingdianpiaoshu[0], jingdianpiaoshu[1], jingdianpiaoshu[2], jingdianpiaoshu[3]); /* 打印各景点的票数情况 * 使用printf函数输出A、B、C、D四个景点的得票数 * jingdianpiaoshu数组存储了各景点的票数信息 */
    

    int max =0, index=0;                   /* 寻找票数最多的景点 * 定义max变量存储最大票数，index变量存储最大票数对应的景点索引 */
    for (int i = 0; i < 4; i++)            //  遍历四个景点的票数
    {
        if (jingdianpiaoshu[i] > max)      //  如果当前景点票数大于已知最大值
        {
            max = jingdianpiaoshu[i];       //  更新最大票数
            index =i;                   //  记录景点索引
        }
        
    }
    
   // 输出结果
     switch (index) {
         case 0: printf("投票最多的景点是A\n"); break; //  当变量值为0时，输出"A景点得票最多"的信息
         case 1: printf("投票最多的景点是B\n"); break; //  当变量值为1时，输出"B景点得票最多"的信息
         case 2: printf("投票最多的景点是C\n"); break; //  当变量值为2时，输出"C景点得票最多"的信息
         case 3: printf("投票最多的景点是D\n"); break; //  当变量值为3时，输出"D景点得票最多"的信息
     }
     
    return 0;
}