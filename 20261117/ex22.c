#include <stdio.h>

int main(){
    int weight = 0,
        water[8] = {0};
    double sum = 0;
    printf("請輸入你的體重(kg):");
    scanf("%d",&weight);
    for(int i = 1; i <= 7; i++){
        printf("請輸入第%d天的喝水量(ml):",i);
        scanf("%d",&water[i]);
        sum = sum + water[i];
    }
    printf("您的體重:%d kg\n",weight);
    printf("7天平均每日飲水量:%.2f ml\n",sum/7);
    printf("每日建議飲水量:%d ml\n",weight*30);
    printf("評估結果:");
    if((sum/7) >= (weight*30)){
        printf("已達到每日建議飲水量！");
    }else{
        printf("未達到每日建議飲水量！");
    }

    return 0;
}