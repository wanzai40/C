
#include <stdio.h>
int main(){

    int arr1[3] = {1,2,3};
    int arr2[5] = {4,5,6,7,8};
    int arr3[7] = {9,10,11,12,13,14,15};

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int len3 = sizeof(arr3)/sizeof(arr3[0]);

    int len[]= {len1,len2,len3};

//使用 int* arr[3] 是因为：

// 类型匹配：数组名作为初始值时退化为指针，所以容器必须是指针类型。

    int* arr[3] = {arr1,arr2,arr3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < len[i]; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}