#include <stdio.h>
// 键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数(不考虑其他字符)
int main(){

    printf("输入\n");

    char str[100] ;
    scanf("%s",str);

    int big=0;
    int small = 0;
    int num = 0;


    // 遍历
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] > 'a' && str[i] < 'z')
        {
            small++;
        }
        else if (str[i] > 'A' && str[i] < 'Z')
        {
            big++;
        }
        else if (str[i] > '0' && str[i] < '9')
        {
            num++;
        }
        
        
    }
    
    printf("%d--%d--%d",big,small,num);



    return 0;
}