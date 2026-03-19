#include <stdio.h>
/*
 * 主函数：打开并读取文件内容
 * 功能：以只读方式打开"E:\印度.txt"文件，逐个字符读取并打印文件内容，最后关闭文件
 */
int main(){

    // 以只读方式打开文件"E:\印度.txt"，并将文件指针赋值给file变量
    FILE* file = fopen("E:\\印度.txt","r");

    // 定义整型变量c，用于存储从文件中读取的字符
    // int c = fgetc(file);
    int c;

    // 循环读取文件中的每个字符，直到文件结束（返回-1）
    while ((c= fgetc(file)) != -1)
    {
        // 打印读取到的字符
        printf("%c",c);
    }
    
    // 关闭文件，释放资源
    fclose(file);




    // 程序正常退出，返回0
    return 0;
}