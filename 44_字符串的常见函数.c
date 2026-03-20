#include <stdio.h>

#include <string.h>     //注意注意注意头文件

int main(){
    char str[] = "sad123";

    char str1[] = "sad";
    char str2[] = "good";

    char str21[] = "gog";
    char str22[] = "beby";

    char str31[] = "aab";
    char str32[] = "aab";

    char str41[] = "QWQW";

    char str51[] = "asdf";
   

// 长度
    int len = strlen(str);

    printf("%d\n\n",len);


// 拼接
//      原理是：把 2 拼接到 1 后面，。1的剩余长度要足够长，能容纳 2，不然会溢出（注意\0）
//  注意：第一个的要求是能被修改的，也就是不能用指针 char* str = "aaa";因为只读
// 不需要声明一个变量去接收
    strcat(str1,str2);

    printf("%s-----",str1);        //是s,字符串
    printf("%s\n\n",str2);      //是s,字符串


// 复制，拷贝
//      用后面的把前面的覆盖掉
//   注意：第一个的要能修改的 ， 剩余容量要够（注意\0）
// 不需要声明一个变量去接收
    strcpy(str21,str22);

    printf("%s----",str21);      //是s,字符串
    printf("%s\n\n",str22);      //是s,字符串


// 比较
//   ==则返回0
// 不==返回非0
>0表示s1>s2，0表示相等，<0表示s1<s2

    int aaa = strcmp(str31,str32);

    printf("%d\n\n",aaa);


// 转小写
// 只能英文, 新写法_strlwr
    strlwr(str41);

    printf("%s\n\n",str41);      //是s,字符串


// 转大写
// 只能英文, 新写法_strupr
    strupr(str51);

    printf("%s\n\n",str51);      //是s,字符串


    return 0;
}