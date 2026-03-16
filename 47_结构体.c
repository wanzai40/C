#include <stdio.h>
#include <string.h>

struct aaa
{
    char name[100];
    int age;
    char sex;
    double heigh;

};

int main(){
    
//  struct  结构体名  变量名
    struct aaa a1;
    
    // a1.name = "asd";        为字符串成员分配内存时，应使用 strcpy 或 strncpy 安全拷贝，避免直接赋值
    strcpy(a1.name , "asd阿萨德");
    a1.age = 3232;
    a1.sex = 'n';
    a1.heigh = 23.12;

    printf("%s",a1.name);
    printf("%d",a1.age);
    printf("%c",a1.sex);
    printf("%lf",a1.heigh);
    





    return 0;
}