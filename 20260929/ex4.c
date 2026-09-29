#include <stdio.h>
#include <math.h>
int main () {
    int hp = 0;
    int attacked = 0;
    int healed = 0;

    printf("請輸入初始生命值:\n");
    scanf("%d", &hp);
    printf("請輸入攻擊傷害:\n");
    scanf("%d", &attacked);
    hp = hp - attacked;
    printf("請輸入治療量:\n");
    scanf("%d", &healed);
    hp = hp + healed;
    printf("請輸入攻擊傷害:\n");
    scanf("%d", &attacked);
    hp = hp - attacked;

    printf("最終生命值:%d\n", hp);
}