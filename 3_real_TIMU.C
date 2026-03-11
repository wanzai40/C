#include <stdio.h>
int main(){
    float a,b,c;

    printf("a长");
    scanf("% f",&a);

    printf("b宽");
    scanf("%f",&b);

    printf("c高");
    scanf("%f",&c);

    //第一面的面积
    printf("第一面的面积是%.2f\n",a*b);
    //第二面的面积
    printf("第二面的面积是%.2f\n",a*c);
    //第三面的面积
    printf("第三面的面积是%.2f\n",b*c);

    //体积
    printf("体积是%.2f\n",a*b*c);

    return 0;
}