#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int arr[]={1,2,3,4,5};
    srand(time(NULL));

     int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        int index = rand()%5;
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    
     for (int i = 0; i < len; i++)
    {
        printf("%d",arr[i]);
    }



    return 0 ;
}