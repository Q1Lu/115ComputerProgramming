#include <stdio.h>
int main(void){
    int age = 0;

    printf("請輸入年齡: \n");
    scanf("%d", &age);
    if (age <= 6) {
        printf("免費\n");
    }else if (age >= 7 && age < 12) {
        printf("兒童票\n");
    }else if (age >= 12 && age < 64) {
        printf("全票\n");       
    }else{
        printf("敬老票\n");
    }
    return 0;
}