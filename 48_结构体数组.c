#include <stdio.h>
#include <string.h>

struct aaa
{
    char name[100];
    int age;
    

};

int main(){
    
    struct aaa a1 = {"asd阿萨德" , 123};
    struct aaa a2 = {"qwe请问" , 555};
    struct aaa a3 = {"zxc自行车" , 222};
   
    // 放入数组
    struct aaa arr[3] = {a1,a2,a3};

    
    // 遍历
    for (int i = 0; i < 3; i++)
    {
        printf("%s,--%d",arr[i].name,arr[i].age);
    }
    




    return 0;
}