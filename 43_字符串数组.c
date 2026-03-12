#include <stdio.h>
int main(){
    // 下标遍历
    char str[][100] = {
        "hello",
        "world",
        "!",
    };

    int len = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < len; i++)
    {
        printf("%s\n",str[i]);          //这个是字符串，s
 
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            printf("%c\n",str[i][j]);           //这个是字符, c
        }
        printf("\n\n");
        
    }
    printf(" 、、、、、、、、、、、、、、、、、、、、、、、、、、、\n");
    

// 、、、、、、、、、、、、、、、、、、、、、、、、、、、二维数组

    char str2arr[3][100] = {
        "zhangaan",
        "lisi",
        "wangwu"
    };

    for (int i = 0; i < 3; i++)
    {
        char* p = str2arr[i];
        printf("%s\n",p);
     
    }
    
    printf(" 、、、、、、、、、、、、、、、、、、、、、、、、、、、\n");
    

// 、、、、、、、、、、、、、、、、、、、、、、、、、、、指针数组

    char * arr[3]={
        "zhangaan",
            "lisi",
            "wangwu"
    };

    for (int i = 0; i < 3; i++)
    {
        char* aaa = arr[i];
        printf("%s",aaa);
    }
    



    return 0;
}