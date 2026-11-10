#include <stdio.h>

int taxi(int km){
    int fare = 70;
    if(km > 2){
        fare = fare + (km-2) *10;
    }
    return fare;
}

int main (){
    int km = 0,
        fare = 0;
    printf("請輸入行駛里程數:");
    scanf("%d",&km);
    fare = taxi(km);
    printf("車資:%d",fare);
    
    return 0;
}