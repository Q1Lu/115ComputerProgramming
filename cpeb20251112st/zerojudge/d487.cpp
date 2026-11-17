#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1){
        printf("1 = ");
        return 1;
    }
    printf("%d * ",n);
    return n * fact(n - 1);
}
int main(){
    int input = 0;
    scanf("%d",&input);
    printf("%d! = ",input);
    printf("%d",fact(input));

    return 0;
}