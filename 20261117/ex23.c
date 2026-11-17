#include <stdio.h>
int main(){
    int sold[3][2] = {0};

    for(int i = 1;i <= 3; i++){
        printf("第%d天\n",i);
        for(int j = 1;j < 3; j++){
            printf("請輸入第 %d 種飲料銷售量:",j);
            scanf("%d",&sold[i - 1][j - 1]);
        }
    }
    printf("銷售紀錄\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",sold[i][j]);
        }
        printf("\n");
    }
}