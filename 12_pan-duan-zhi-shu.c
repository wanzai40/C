#include <stdio.h>
int main(){

    // 质数要大于1，所以从2开始.只能被1和它自身整除
    // 从2开始，到目标数减一，这个范围之内，不能被任何数整除的就是质数
    int num=17;
    int god=0;
    for (int  i = 2; i <=num-1; i++)
    {
        // 这里反向判断，如果能被这个范围内的任意一个数整除，那就不是质数,那就把标记计数
        
        if (num % i == 0)//能被循环i整除的就不是质数
        {
            // 不是质数
            god++;
            break;//可以加上break，因为只要是>0，那就不是质数了
        }
        
    }
    
    if (god==0)
    {
        /* code */
        printf("质数");
    }else
    {
        printf("fanzhishu");
    }
    
    



    return 0;
}