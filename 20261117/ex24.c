#include <stdio.h>
int main(){
    int number[6] = {101, 205, 310, 405, 520, 630},
        input = 0,
        i = 0;
    printf("請輸入商品編號:");
    scanf("%d",&input);
    for(i = 0; i < 6; i++){
        if(number[i] == input){
            break;
        }
    }
    printf("找到商品,商品位置:%d",i);
    return 0;
}