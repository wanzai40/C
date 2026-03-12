#include <stdio.h>
// 需求:已知正确的用户名和密码，请用程序实现模拟用户登录。总共给三次机会，登录之后，给出相应的提示
#include <string.h>
int main(){

    char nameaaa[] = "user";        //这里也可以写成char* nameaaa = "user";        
    char pwdaaa[] = "pwd";

    char name[100] ;
    char mima[100] ;

    // printf("mingzi\n");
    // scanf("%s",name);
    // printf("%s\n",name);

    // printf("mima\n");
    // scanf("%s",mima);
    // printf("%s\n",mima);


    for (int i = 0; i < 3; i++)
    {

// 方法一
        if (!strcmp(nameaaa,name) && !strcmp(pwdaaa,mima))
        {
            printf("jingru");
            break;
        }
        


// 方法 2

        printf("名字\n");
        scanf("%s",name);      // 对于字符数组，通常不需要加 &，直接写数组名即可，因为数组名本身就是地址。

        printf("密码\n");
        scanf("%s",mima);

        int flag = strcmp(nameaaa,name);
        int fff = strcmp(pwdaaa,mima);
        printf("%d",flag);

        if (flag == 0 && fff == 0)
        {
            printf("jingru");
        }else{printf("错误、n\n");}
        
        
    }
    
    


    return 0;
}