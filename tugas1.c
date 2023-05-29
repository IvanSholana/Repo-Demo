#include <stdio.h>
#include <math.h>

// int timbangan1(int arr[],int x,int start, int end){
//     for(int a = start; a >= end; a--){
//         x += arr[a];
//     }
//     return x;
// }

// int timbangan2(int arr[],int start, int end){
//     int x = arr[start];
//     for(int a = start; a < end; a++){
//         x += arr[start];
//     }
//     return x;
// }

int main(){
    int x,n,next = 0,start = 0,upper = 0;
    scanf("%d %d",&n,&x);
    int berat[n],berat2[n];
    for(int a = 0; a < n; a++){
        berat[a] = pow(3,a);
        if(x >= berat[a]){
            start = a;
            upper = a + 1;
        }
        if(x == berat[a]){
            printf(" \n%d\n",a+1);
            next = 1;
            break;
        }
    }

    if(next){
       
    }
}