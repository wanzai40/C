#include <stdio.h>
int main()
{
    // int a;
    // int b;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // printf("%d", a + b);

    float  a1;
    double b1;

    scanf("%f",  &a1);  // float  ➜ %f
    scanf("%lf", &b1);  // double ➜ %lf
    
    printf("%f\n", a1);
    printf("%f", b1);
    
    return 0;
}

scanf 要精确匹配：短f长lf
 
 float  →  %f （4字节）
 
 double  →  %lf （8字节）
printf 统一用 %f（除了 long double）