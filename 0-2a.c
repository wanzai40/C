#include <stdio.h>/*
。请从键盘输入二维数组的
元素并存入到3行4列的二维数组中，将其转换为一个4行3列的二维数组并输出（4行3列形式
输出）。同时求出数组中最大元素值并输出。
*/
int main(){

    int arr [3][4] ={{0},{0},{0}};
    int qrr [4][3];
    int max;

    for (int i = 0; i < 3; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            scanf("%d",&arr[i][y]);
        }
        
    }

    max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            qrr[y][i] =arr[i][y];
            if (arr[i][y] > max)
            {
                max = arr[i][y];
            }
            
        }
        
    }

     for (int i = 0; i < 4; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d-",qrr[i][y]);
        }
        printf("\n");
    }
    
    printf("%d",max);

    return 0;
}



////////////////////////////
#include<stdio.h>
int fun(int n)
{
	if(n==1)
		return 1;
	else
		return fun(n-1)*n;
}
int main()
{
	int n;
	int s=0;
	scanf("%d",&n);
	s=fun(n);
	printf("%d的阶乘为:%d",n,s);
	return 0;
}


////////////////////////////

#include<stdio.h>          
int main()                    
{
    int s;                // 符号位：1 或 -1，控制正负交替
    float n, t, pi;       // n:分母, t:当前项的值, pi:累加和(π/4)
    t = 1; pi = 0; n = 1.0; s = 1;    // 初始化
    
    while(t >= 1e-6)      // 循环条件：当前项 ≥ 0.000001、、while (t >= 1e-6 || t <= -1e-6)   // 等价于 |t| >= 1e-6
    {
        pi = pi + t;      // 累加当前项到总和
        n = n + 2;        // 分母加2 (1,3,5,7,9...)
        s = -s;           // 符号翻转 (1→-1→1→-1...)
        t = s / n;        // 计算下一项的值
    }
    
    pi = pi * 4;          // π/4 × 4 = π
    printf("pi=%lf\n", pi);  
    return 0;              
}

/////////////////////////

#include <stdio.h>
#include <math.h>    // 添加fabs函数

int main()
{
    int s = 1;
    float n = 1.0, t = 1, pi = 0;
    
    while (fabs(t) >= 1e-6)   // ✅ 用绝对值判断
    {
        pi = pi + t;
        n = n + 2;
        s = -s;
        t = (float)s / n;     // 注意类型转换
    }
    
    pi = pi * 4;
    printf("pi = %f\n", pi);
    return 0;
}


