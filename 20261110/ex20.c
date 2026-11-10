#include <stdio.h>
int gold = 1000;
void buyItem(){
    extern int gold;
    gold = gold - 200;
    printf("購買完成，剩餘金幣:%d",gold);
}
int main(){
    buyItem();
    
    return 0;
}