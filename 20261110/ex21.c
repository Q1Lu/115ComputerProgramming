#include <stdio.h>
#define BUDGET 20000
int expense = 0;
int main(){
    extern int expense;
    int total = 0;
    printf("請輸入目前的旅行花費:");
    scanf("%d",&expense);
    printf("旅行總預算:%d元\n",BUDGET);
    total = BUDGET - expense;
    printf("目前旅行花費:%d元\n",expense);
    printf("剩餘預算:%d元\n",total);

    return 0;
}