#include <stdio.h>

// 案例2:打印折纸的次数
// 需求:世界最高山峰是珠穆朗玛峰(8844.43米=8844430毫米)，
// 假如我有一张足够大的纸，它的厚度是0.1毫米，请问，我折叠多少次，可以折成珠穆朗玛峰的高度?
int main(){
    int zhu=8844430;
    double a=0.1;
    int ci=0;
    while (a<zhu)
    {
        /* code */
        a=a*2;
        ci++;
    }
    printf("cishiwei:%d",ci);
    




    return 0;
}