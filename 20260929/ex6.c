#include <stdio.h>
int main() {
    int card = 5;
    int lab = 1;
    int library = 1<<1;
    int parking = 1<<2;
    int office = 1<<3;
    printf("停車場的權限:%d\n", parking & card);
    printf("學生有無停車場權限:%d\n", parking & card);
    printf("學生有無老師辦公室權限:%d\n", office & card);
    return 0;
}