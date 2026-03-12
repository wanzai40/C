#include <stdio.h>
int main(){

    //1
    char str11[4] = "acb";
    char str1[] = "hello world";
    char str2[] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    printf("%s\n",str1);
    printf("%s\n",str2);

    //修改
    str1[0] = 'H';
    printf("%s\n",str1);



    //2,不能修改
    char* str3 = "hello world";
    printf("%s\n",str3);




    return 0;
}