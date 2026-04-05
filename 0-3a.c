#include<stdio.h>
int main(){

    int x ,y;
    scanf("%d",&x);

    if (x<3)
    {
        y=-1;
    }else if (x>=3 && x<=9)
    {
        y=6*x;
    }else if (x>9)
    {
        y=2*x+5;
    }
    printf("%d",y);
    
    return 0;
}

/////////////////////////////////////

#include<stdio.h>
int main(){

    for (int i = 100; i < 1000; i++)
    {
        int ge =i%10;
        int shi =i/10%10;
        int bai =i/100%10;

        if (i== ge*ge*ge+shi*shi*shi+bai*bai*bai)
        {
            printf("%5d",i);
        }    
    }
    
    return 0;
}

///////////////////////////////
#include <stdio.h>

int main() {
    int a, b, c;
    int count = 0;  // 用于计数，实现每行两个数

    for (int i = 100; i <= 999; i++) {
        a = i / 100;        // 拆分百位
        b = (i / 10) % 10;  // 拆分十位
        c = i % 10;         // 拆分个位

        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d\t", i);
            count++;
            if (count % 2 == 0) {  // 每输出两个数换行
                printf("\n");
            }
        }
    }

    // 若最后一行不足两个数，补换行
    if (count % 2 != 0) {
        printf("\n");
    }

    return 0;
}
