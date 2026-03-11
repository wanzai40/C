#include <stdio.h>
int main(){

    int arr[] = {33,5,22,44,55,-8};

    int len=sizeof(arr) / sizeof(arr[0]);
    int a=arr[0];

    for (int i = 0; i < len; i++)
    {
       
        // arr[i]>a ? a=arr[i] : a;
        if (arr[i] > a) a = arr[i];
    }
    
    printf("%d",a);



    // main2();

    return 0;
}


// 排序
void y2(){

    int arr[] = {33,5,22,44,55};

    int len=sizeof(arr) / sizeof(arr[0]);
    int brr[]={};
    int a =0;
    
    for (int i = 0; i < len; i++)
    {
        if (arr[i]>a)
        {
            
        }
        
       
    }
    
    printf("%d",brr);






    
}