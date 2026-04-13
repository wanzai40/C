#include<stdio.h>
void main()
{ 
    int a[20], *p[5], i;        // a[20]是int数组，p[5]是指针数组
    
    for(i=0; i<19; ++i)   
        a[i] = i;               // a[0]=0, a[1]=1, ..., a[18]=18
    
    for(i=0; i<5; ++i)   
        p[i] = &a[i*4];         // p[0]=&a[0], p[1]=&a[4], p[2]=&a[8], p[3]=&a[12], p[4]=&a[16]
    
    for(i=0; i<5; ++i)   
        printf("%d", *(p[i]+1));  // *(p[i]+1) = a[i*4+1]
}


#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,10,7,8,9,6};
    int max = arr[0];
    int index;

    for(int i = 0; i < 10; i++){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }

    int t;
    t = arr[0];
    arr[0] = max;
    arr[index] = t;

    return 0;
}


#include <stdio.h>

// 函数1：求最大公约数（辗转相除法/欧几里得算法）
int gcd(int a, int b)
{
    int temp;
    while (b != 0) //  循环条件：当b不为0时继续执行
    {
        temp = a % b; //  计算a除以b的余数
        a = b; //  将b的值赋给a
        b = temp; //  将余数赋给b，作为下一次循环的被除数
    }
    return a; //  当b为0时，a即为最大公约数
}

// 函数2：求最小公倍数
// 公式：lcm(a,b) = |a * b| / gcd(a,b)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);  // 调用gcd函数    最小公倍数 = 两数之积 ÷ 最大公约数
}

int main()
{
    int num1, num2;
    int result_gcd, result_lcm;
    
    printf("请输入两个正整数：");
    scanf("%d %d", &num1, &num2);
    
    // 调用函数
    result_gcd = gcd(num1, num2);
    result_lcm = lcm(num1, num2);
    
    printf("最大公约数(GCD)：%d\n", result_gcd);
    printf("最小公倍数(LCM)：%d\n", result_lcm);
    
    return 0;
}
