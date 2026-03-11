#include <stdio.h>

int b (int n1,int n2){
    int sum=n1+n2;
    return sum;
}




int main(){

    // 比大小
    int qq=b(10,20);
    int wx=b(90,80);
    // printf("%d",qq>wx? qq:wx);

    if (qq>wx)
    {
        printf("qq da");
        /* code */
    }else if (wx>qq)
    {
        printf("wx da");
        /* code */
    }else
    {
        printf("xiandeng");
    }
    
    









    return 0;
}