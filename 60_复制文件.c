#include<stdio.h>
/*
 * 主函数：实现文件复制功能
 * 将E盘下的test.mp3文件复制为test222.mp3文件
 * 使用二进制读写方式处理文件
 */
int main(){


    FILE *fp1 = fopen("E:\\test.mp3","rb");  // 以二进制只读方式打开源文件test.mp3

    FILE *fp2 = fopen("E:\\test222.mp3","wb"); // 以二进制写入方式打开目标文件test222.mp3

    char arr[1024];  // 定义缓冲区，用于存储读取的数据块
    
    int n ;          // 用于存储实际读取的字节数            //  变量n用于记录fread函数实际读取的字节数

    // 循环读取源文件数据，直到文件结束 
    while((n = fread(arr, sizeof(char), 1024, fp1)) != 0){  //  使用while循环持续读取文件，直到fread返回0（表示文件结束）

        // 将读取的数据写入目标文件
        fwrite(arr, sizeof(char), n, fp2);                  //  使用fwrite函数将缓冲区中的数据写入目标文件
    }

    // 关闭文件指针，释放资源
    fclose(fp1);
    fclose(fp2);



    return 0;  // 程序正常结束
}