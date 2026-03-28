#include <stdio.h>
fgets
 
 fgets(字符数组, 数组长度, stdin);

char s[20];
fgets(s, 20, stdin);     stdin  是什么？- 全称：standard input → 标准输入- 大白话：就是「键盘」

- 最多读 长度-1 个字符，自动加  \0 
​
- 绝对不会越界，安全
​
- 会把回车  \n  一起读进去




int main(){
    
                    // 打开文件，使用"r"模式表示读取文件
                    // 文件路径为E:\印度.txt
    FILE* file = fopen("E:\\印度.txt","r");

    
                    // 定义一个字符数组作为缓冲区，大小为1024字节
    char arr[1024];
                    // 定义一个字符指针，用于接收fgets函数的返回值
    char* str;


   
                    // 使用循环逐行读取文件内容
                    // 当fgets读取到文件末尾时，会返回NULL，此时循环结束
                 //fgets(缓冲区, 缓冲区大小, 文件指针) —— 三个参数分别是：存到哪、最多读多少、从哪读。
                   //                                               字符数组   最大读取字符数  文件指针
                   //1024 == sizeof(arr)
    while ((str= fgets(arr, 1024 ,file)) != NULL)
    {
        
        // 打印读取到的一行内容
        printf("%s",str);
    }
    
    // 关闭文件，释放资源
    // 这是一个良好的编程习惯，可以避免资源泄露
    fclose(file);




    
    // 程序正常结束，返回0
    return 0;
}