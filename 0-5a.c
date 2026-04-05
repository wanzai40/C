#include<stdio.h>//交换a b
int main(){

    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d,%d",a,b);

    return 0;
}

/////////////////////////////////////

#include<stdio.h>//将两个一维数组的值对应元素相加然后累加
#define N 5
int main(){

    int arr[N];
    int raa[N];
    int sum=0;
    for (int i = 0; i < N; i++)
    {
        int sum = arr[i]+raa[i];
    }
    printf("%d",sum);
    return 0;
}

////////////////////////////////////////

#include<stdio.h>//设计结构体和声明结构体变量

struct js
{
    float gh;
    char name[50];
    char sex[5];
    int age;
    float money;
};


int main(){


    struct js a1={001,"哇","难",11,1000};
    struct js a2={002,"哇","难",22,2000};

    return 0;
}

/////////////////////////////////////////////////////////

#include<stdio.h>//求一维数组中最大元素及其对应元素下标的函数，

void hs (int arr[5]){

    int max=0,index;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max){
            max=arr[i];
            index =i;
        }
    }
    
    printf("%d%d",max,index);

}
int main(){

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    hs(arr);

    return 0;
}

//////////////////////////////////////////////////

#include<stdio.h>//输入5个学生的成绩，然后通过冒泡排序进行降序排列
int main(){

    int score[5],t;
    for(int i = 0 ; i<5 ; i++){
        scanf("%d",&score[i]);
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(score[j]<score[j+1]){
                t=score[j];
                score[j]=score[j+1];
                score[j+1]=t;
            }       
        }
    }

    for(int i=0;i<5;i++){
        printf("%d",score[i]);
    }

    return 0;
}

////////////////////////////////////////////////

#include <stdio.h>

int main() {
    // 1. 初始化计数器：字母、空格、数字、其他字符
    int letter = 0, space = 0, digit = 0, other = 0;
    int c;  // 必须用int类型，因为getchar()返回int，要存EOF(-1)

    // 2. 循环读取字符，直到读到换行符\n（一行结束）
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letter++;  // 字母
        } else if (c == ' ') {
            space++;   // 空格
        } else if (c >= '0' && c <= '9') {
            digit++;   // 数字
        } else {
            other++;   // 其他字符
        }
    }

    // 3. 输出统计结果
    printf("字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n", 
           letter, space, digit, other);
    return 0;
}
