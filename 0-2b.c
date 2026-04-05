#include<stdio.h>//8个月，利率0.24，后还钱
int main(){
    double huan =10000;
    int i=1;
    
    while (i<=8)
    {
        huan=(1+0.24)*huan;
        i++;
    }
    printf("%.2f",huan );

    return 0;
}

/////////////////////////////////////

#include<stdio.h>//计算矩阵对角线元素的和
int main(){
   double arr [4][4];

   for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            scanf("%lf",&arr[i][y]);
            
        }
 
    }

    for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < 4; y++)
        {
           printf("%.2f-",arr[i][y]);
        }
    printf("\n");
    }
double sum=0;
    for (int i = 0; i < 4; i++)//主对角线和
    {
        sum = sum + arr[i][i];
    }
    printf("%f\n",sum);

// 03,12,21,30
    for (int i = 0,t = 3; i < 4,t >=0; i++,t--)//s上面的主对角线和sum加副对角线和
    {
            sum = sum + arr[i][t];
    }
    printf("%f\n",sum);
    return 0;
}

///////////////////////
#include<stdio.h>
int fun(int a){
    if (a==1||a==2) //  如果a等于1或2，直接返回1（斐波那契数列的前两项都是1）
    {
        return 1;
    }else if (a>2)
    {
        int num =fun(a-1) + fun(a-2);   //fun(a-1)：计算前一项的值。fun(a-2)：计算前两项的值。

        return num;
    }
    
    
}
int main(){
    int a ;
    scanf("%d",&a);
   int num =fun(a);
   printf("%d",num) ;


    return 0;
}

////////////////////////////2

#include <stdio.h>
int main()
{
    int a[4][4], sum1 = 0;
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]); //  从键盘读取整数，存入数组a的当前位置
            sum1 += a[i][j]; //  将当前元素值累加到sum1中
        }
    printf("计算一个4x4二维数组中所有元素的总和。和为=%d\n", sum1);
    return 0;
}

/////////////////////////////////////
#include <stdio.h>

int main() {
    int a[4][4];        // 4×4矩阵
    int trace = 0;      // 矩阵的迹（对角线之和）
    int i, j;
    
    // 输入16个元素
    printf("请输入4×4矩阵的元素（共16个）：\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // 计算迹：主对角线元素之和（i == j）
    for (i = 0; i < 4; i++) {
        trace += a[i][i];    // 关键：行号=列号的元素
    }
    
    // 输出结果
    printf("矩阵的迹为：%d\n", trace);
    
    // 可选：显示主对角线元素
    printf("主对角线元素：");
    for (i = 0; i < 4; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
    
    return 0;
}

