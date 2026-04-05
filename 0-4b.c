#include<stdio.h>//找最大值
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    //printf("%d,%d,%d",a,b,c);
   
    int t   = a>b ? a:b;
    int max = t>c ? t:c;

    printf("%d",max);
    
    return 0;
}

//////////////////////////

#include<stdio.h>//读取10个整数，然后将它们以相反的顺序输出.逆序输出
int main(){

    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 9; i >=0 ; i--)
    {
        printf("%d",a[i]);
    }
       
    return 0;
}



#include<stdio.h>
int main(){
    int a,b,c,t;                 
    scanf("%d%d%d",&a,&b,&c);
    
    if (a<b) {t=a,a=b,b=t;}   // ① 比较a,b，大者放a
    if (a<c) {t=a,a=c,c=t;}   // ② 比较a,c，大者放a（此时a最大）
    if (b<c) {t=b,b=c,c=t;}   // ③ 比较b,c，大者放b
    
    printf("%5d%5d%5d\n",a,b,c);  // 输出：a≥b≥c（降序）
    return 0;
}





#include <stdio.h>

int main() {
    int i;
    long long sum = 0;      // 存储阶乘和，用long long防溢出
    long long factorial = 1; // 存储当前阶乘值
    
    for (i = 1; i <= 10; i++) {
        factorial *= i;     // i! = (i-1)! * i，递推计算
        sum += factorial;   // 累加到总和
    }
    
    printf("1! + 2! + ... + 10! = %lld\n", sum);
    
    return 0;
}
