#include <stdio.h>
int main() {
    int age = 0;

    printf("請輸入年齡: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("成年人\n");
    }
    return 0;
}