#include <stdio.h>
int muti(int amount, int price){
    return amount * price;
}
int main(){
    int amount = 0,
        price = 0,
        total = 0;

    printf("請輸入購買物品數量:");
    scanf("%d",&amount);
    printf("請輸入購買物品單價:");
    scanf("%d",&price);
    total = muti(amount, price);
    printf("總價:%d\n",total);

    return 0;
}