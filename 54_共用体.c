#include <stdio.h>
#include <string.h>

union moneytype
{
    int mi;
    double md;
    char mc[100];
};

// 也可以用别名
union //moneytype
{
    int mi;
    double md;
    char mc[100];
} m;

int main(){

    // m qian;    别名时
    union moneytype qian;

    //每次只能赋一个值,. 所有成员共用同一块内存空间,. 同一时刻，只有最后赋值的那个成员是有效的
    qian.mi = 777;
    qian.md = 88.88;
    strcpy(qian.mc , "一元");

//打印是要和上面的类型一样
    printf("%d\n",qian.mi);
    printf("%lf\n",qian.md);
    printf("%s",qian.mc);





    return 0;
}