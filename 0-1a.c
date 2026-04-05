#include <stdio.h>
int main(){

    for (int i = 200; i <= 300; i++)
    {
        int ge ,shi,bai;
        ge  = i   %10;
        shi = i/10%10;
        bai = i/100%10;

        if (ge+shi+bai==12 && ge*shi*bai==42)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}


#include <stdio.h>
int main(){

    int arr[10] ={};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }

    int min=arr[9],max=0,temp,jhx,jhd;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            
            jhx =i;
        }else if (arr[i] > max)
        {
            
            jhd =i;
        }
        
        
    }
    
    temp = arr[0];
    arr[0] = arr[jhx];
    arr[jhx] =temp;

    temp = arr[9];
    arr[9] = arr[jhd];
    arr[jhd] = temp;

    for (int i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}

//28、输入 10 个整数， 将最小值与第一个数交换， 最大值与最后一个数交换， 然后输出交换后的 n 个数。
#include<stdio.h> 
void main() 
{ 
int a[10],max,min,i;
for ( i=0;i<10;i++ ) scanf(" %d" ,&a[i]);
max=min=0;
for ( i=1;i<10;i++ )
if ( a[max]<a[i] ) max=i;
else if ( a[min]>a[i] ) min=i;
if ( min!=0 ) { i=a[0]; a[0]=a[min]; a[min]=i; 
if (max == 0) max = min;} // 如果最大值在首位（被换走了），更新max
if ( max!=9 ) { i=a[9]; a[9]=a[max]; a[max]=i; }
for ( i=0;i<10;i++ ) printf(" %d " ,a[i]);
printf(" \n" );
}



#include <stdio.h> 
int main ( ) 
{ 	
int a, b, c; 
a=b=c=0;
for(int i=200; i<=300;i++)
{
a=i/100; 
b=i/10%10; 
c=i%10; 
if(42==a*b*c&&12==a+b+c) printf(" 该数为%d\n" , i);
} 
return 0;
}

// 

#include <stdio.h>

#define M "(a*4+4*a)"

int main()
{
    printf("%s\n", M);        // 输出: (a*4+4*a)
    
    char str[] = M;
    printf("%s\n", str);   // 输出: (a*4+4*a)
    
    return 0;
}