#include <stdio.h>
int main(){
    for (int i = 100; i <=999; i++)
    {
        int ge = i % 10;
        int shi = i /10 %10;
        int bai = i /100 %10;
        if (i == (ge*ge*ge) + (shi*shi*shi) + (bai*bai*bai))
        {
            printf("%d--",i);
        }
            
    }
    
    return 0;
}
///////////////////////////
#include <stdio.h>
int main(){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}
//////////////////////////////////////
#include <stdio.h>
int main()
{
    int i, j, t, s[3][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf(" %d", &s[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf(" %d ", s[i][j]);
        printf(" \n");
    }
    for (i = 0; i < 3; i++)
        for (j = i + 1; j < 3; j++)
        {
            t = s[i][j];
            s[i][j] = s[j][i];
            s[j][i] = t;
        }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf(" %d ", s[i][j]);
        printf(" \n");
    }

    return 0;
}

///////////////////////////
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    float average;
    
    printf("请输入10个整数：\n");
    
    // 使用指针输入数据
    for (int i = 0; i < 10; i++) {
        printf("第%d个数: ", i + 1);
        scanf("%d", arr + i);  // 等价于 &arr[i]
    }
    
    // 使用指针计算和
    int *p = arr;  // 指针指向数组首元素
    for (int i = 0; i < 10; i++) {
        sum += *(p + i);  // 等价于 p[i] 或 arr[i]
    }
    
    // 计算平均值
    average = (float)sum / 10;
    
    // 输出结果
    printf("\n========== 结果 ==========\n");
    printf("数组元素: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    printf("和: %d\n", sum);
    printf("平均值: %.2f\n", average);
    
    return 0;
}
