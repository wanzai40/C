// #include <stdio.h>
// int main()
// {
//     double b = 1;
//     double e=1;
//     for(int i = 1; i <= 20; i++)
//     {
//         b=b*i;    //阶乘
//         e+=1.0/b; //分数
//     }
//     printf("%f", e);
// }

/////////////////////////////////////////

// #include <stdio.h>

// int main()
// {
//     int i;
//     double e = 1.0;      // 第1项：1
//     double term = 1.0;   // 当前项的值，初始为1（即1/0! = 1）
    
//     for(i = 1; i <= 20; i++)
//     {
//         term /= i;       // term = term / i = 1/(i!) 
//                          // 例如：i=1时，term=1/1=1/1!
//                          //       i=2时，term=1/1/2=1/2!
//         e += term;         // 累加到e
//     }
    
//     printf("e = %.15f\n", e);
    
//     return 0;
// }
