#include<stdio.h>
int main(){

    int arr[3][4]={
        {1,2,3,4},
        {11,22,33,44},
        {111,222,333,444}
    };
    int www=arr[0][0],hang,lie;
    for(int i =0;i<3;i++){
        for(int k=0;k<4;k++){
            if(www<arr[i][k])
            {
                www=arr[i][k];
                hang=i;
                lie=k;
            }
        }
    }

    printf("%d--%d--%d",www,hang,lie);

return 0;


}

//////////////////////////////////////

#include <stdio.h>
int main() {
    
    for (int i = 100; i <= 200; i++) {
        int flag = 1;
        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    return 0;
}

//////////////////////////////////////////
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
