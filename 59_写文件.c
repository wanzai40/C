#include <stdio.h>
————————————————————————————————————————
fputs(字符数组, 往哪输出);
往屏幕输出一行
fputs(str, stdout);
eg: 
#include <stdio.h>
int main() {
    char s[30];
    fgets(s, 30, stdin);   // 键盘读一行
    fputs(s, stdout);      // 屏幕打印一行
    return 0;
}

——————————————————————————————————————————————

int main(){

    FILE* fp = fopen("E:\\cs.txt","w");       //写是w

    int a = fputc(97,fp);               ////fputc 一次写一个字符，返回写出的字符
    printf("%c", a);


    int b = fputs("阿萨德",fp);         //fputs 一次写一个字符串，写出成功返回非负数，一般忽略返回值//细节:因为如果写出失败，那么就会有一个E0F的错误
    printf("%d", b);


    char arr[] = {32,48,65,97};     //分别为空格，0，A，a
    int c = fwrite(arr,sizeof(char), 4 ,fp);    //fwrite 一次读多个，返回写出的字节个数
    printf("%d", c);

    fclose(fp);


    return 0;
}