
#include <stdio.h>
int main(){
    int n;
    printf("请输入一个3wei正整数：");
    scanf("%d",&n);

    if(n>=100 && n<=999){
        int a,b,c;
        a=n/100;
        b=n/10%10;
        c=n%10;
        printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
    }

    return 0;
}