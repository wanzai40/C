#include <stdio.h>
#include <string.h>

struct message
{
    int phone;  
    char email[100];
};

struct students
{
    char name[100];
    int age;

    struct message xinxi;
};





int main(){

// 方法一
    struct students stu = {"aaa" , 111 , .xinxi.phone=122421 , .xinxi.email="qweqeqeqw"};

//方法3
    struct students stu3 = {"aaa" , 111 , {123432, "eeeeeeee"}};

// 方法二
    struct students stu2;

    strcpy(stu2.name , "qqq");
    stu2.age = 12;

    stu2.xinxi.phone = 123456789;
    strcpy(stu2.xinxi.email, "wwwwwww");
    

    printf("%s,%d,%d,%s", stu.name, stu.age, stu.xinxi.phone, stu.xinxi.email);
    printf("%s,%d,%d,%s", stu2.name, stu2.age, stu2.xinxi.phone, stu2.xinxi.email);




    return 0;
}