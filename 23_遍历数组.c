#include <stdio.h>
int main(){

    int arr[]={1,12,13,14,15};
    int num= arr[1];




    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len ; i++)
    {
        printf("%d\n",arr[i]);
    }
    







    return 0 ;
}