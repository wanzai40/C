#include <stdio.h>

int chazhao(int arr[] , int len , int num);
int main(){

    int arr[]={11,22,33,44,55};
    int len = sizeof(arr) / sizeof(int);

    int num =33;


    int a = chazhao(arr,len,num);

    printf("下标%d",a);


    return 0;
}

// 遍历数组并把值和num比对，若==则
// 返回i，也就是下标
int chazhao(int arr[] , int len , int num){
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
        
    }
    return -1;
}