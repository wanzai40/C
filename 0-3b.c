

//////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int score;
    printf("please  input score(0-100): ");
    scanf("%d", &score);
    score = score / 10; //  将分数除以10，简化switch判断条件  例如：95/10=9，85/10=8，以此类推
    switch (score)
    {
    case 10: //  100分的情况
    case 9: //  90-99分的情况
        printf("The grade is ：A\n");
        break;
    case 8: //  80-89分的情况
        printf("The grade is ：B\n");
        break;
    case 7:
        printf("The grade is ：C\n");
        break;
    case 6:
        printf("The grade is ：D\n");
        break;
    default:
        printf("The grade is ：E\n");
        break;
    }
    return 0;
}
////////////////////////////////////////////////
#include<stdio.h>
#include <math.h>
float getarea(float a, float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        float p = (a + b + c) / 2;
        float area = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("面积=%.2f", area);
        //return area;
    }
    else
    {
        printf("不能构成三角形");
        //return -1;
    }
}
