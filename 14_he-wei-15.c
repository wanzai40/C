// 六、和为15的数字(课堂练习)
// 找出0~1000之内，符合要求的数字:
// 要求:每一位的数字之和等于15举例:78，168，1167

#include <stdio.h>
int main(){

    // int num =178;
    // int sum=0;
    // while (num!=0)
    // {
    //     //获取右1
    //     int temp = num%10;
    //     //删掉右1
    //     num=num/10;
    //     // printf("%d\n",temp);
    //     sum=sum+temp;
    // }
    
    // printf("%d\n",sum);


    for (int num = 1; num <= 1000; num++)
    {
        // int num =178;
        int temp_num = num; // 1. 创建一个临时变量来操作，保护外层循环变量 num
        int sum=0;
        while (temp_num!=0)
        {
            //获取右1
            int temp = temp_num%10;
            //删掉右1
            temp_num=temp_num/10;
            // printf("%d\n",temp);
            sum=sum+temp;

            
            
        }
        if (sum==15)
            {
                /* code */
                printf("%d\n",num);
            }
        // printf("%d\n",sum);
    }
    














    return 0;
}