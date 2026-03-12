#include <stdio.h>
int main(){

    char str[100];
    printf("请输入一个字符串：");
    scanf("%s",str);
    printf("接收到：%s\n",str);

    char* p = str;

    while(*p != '\0'){
        printf("%c\n",*p);       ////是%c
        p++;
    }








// ////////////////////

    char str2[100];
    
    printf("请输入一个字符串：");
    scanf("%s",str2);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        printf("%c\n",str2[i]);     //是%c,字符
    }
    


    return 0;
}