// #include<stdio.h>
// int main(){

//     float gao =2,kuan =1.5,zhouchang,mianji;
//     zhouchang = gao *2 + kuan*2;
//     mianji = gao *kuan;
//     printf("%.2f%.2f",zhouchang,mianji);

//     return 0;
// }

////////////////////////////////////////////

// #include<stdio.h>
// #define N 5
// int main(){

//     int a11[N]={1,2,3,4,5};
//     int a22[N]={5,4,3,2,1};
//     int cj[N];
//     for(int i =0;i<N;i++){
//         cj[i]=a11[i]*a22[i];
//         printf("%d",cj[i]);
//     }

//     return 0;
// }

//////////////////////////////////////////////////

// struct js
// {
//     float gh;
//     char name[50];
//     char sex[5];
//     int age;
//     float money;
// }s1,s2;

///////////////////////////////////////////////////

// #include<stdio.h>
// void hs(int arr[],int* min,int* index){
//     *min=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]<*min){
//             *min=arr[i];
//             *index =i;
//         }
//     }
    
// }
// int main(){

//     int arr[5]={3,2,4,1,5};
    
//     int min,index;
//     hs(arr,&min,&index);
//     printf("%d--%d",min,index);


//     return 0;
// }

// ///////////////////////////////////////////

// #include<stdio.h>
// int main(){

//     int arr[5],t;
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<4;i++){
        
//         for(int j =0;i<4-j;j++){
//             if(arr[j]>arr[j+1]){
//                 t=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=t;
//             }
//         }
//     }

//     for(int i=0;i<5;i++){
//          printf("%d",arr[i]);
//     }

//     return 0;
// }

///////////////////////////////////////////////

