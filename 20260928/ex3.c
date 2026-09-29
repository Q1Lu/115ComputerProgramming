#include <stdio.h>
#include <math.h>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;

    printf("請輸入三角形的底(cm):\n");
    scanf("%f", &a); 
    printf("請輸入三角形的高(cm):\n");
    scanf("%f", &b);
    c=(a*b)/2;
    printf("三角形的面積是:%.2f\n", c);
    return 0;
}