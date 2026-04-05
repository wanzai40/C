#include<stdio.h>//打印字符串
int main(){

    char arr[]="I love China!";

    printf("%s",arr);

    return 0;
}

/////////////////////////////////

#include<stdio.h>//求1+ 1/2 + 1/3 + 1/4 +....+ 1/10 的和
int main(){

    float sum=0.0;
    for (int i = 1; i <=10; i++)
    {
        sum += 1.0/i;
    }
    printf("%f",sum);

    return 0;
}

///////////////////////////////////

#include<stdio.h>//比大小
int main(){

    int a1,a2,max;
    scanf("%d%d",&a1,&a2);      //按回车、空格才是下一个数
    // printf("%d,%d\n",a1,a2);
    max= (a1>a2) ? a1 : a2;
    printf("%d",max);
    return 0;
}