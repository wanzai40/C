#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //先弄种子
    srand(time(NULL));

    //随机数,1--100
    int randnum = rand() % 100 +1;
    printf("%d\n",randnum);

    // 弄变量，接收键盘的值
    int scanfnum ;

    

    // 循环猜，对了退出
    // while (randnum!=scanfnum)
    while (1)
    {
        // 接收键盘的值
        printf("整数：");
        scanf("%d",&scanfnum);
        
        // 判断
        if (scanfnum==111)
        {
            break;

        }else if (randnum<scanfnum)
        {
            
            printf("dal\n");
            

        }else if (randnum>scanfnum)
        {
            
            printf("xiaol\n");
            
        }else if (randnum==scanfnum)
        {
             printf("caiduil");
             break;
        }
        
        
        
    }
    
    // printf("duil");
    
    



    return 0;
}