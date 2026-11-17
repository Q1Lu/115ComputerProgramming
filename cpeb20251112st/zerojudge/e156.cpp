#include <bits/stdc++.h>
using namespace std;

int fab(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fab(n - 1) + fab(n - 2);
}
int plusss(int n){
    if(n == 0){
        return 0;
    }
    return n + plusss(n - 1);
}

int main(){
    int a = 0;
    scanf("%d",&a);
    printf("%d\n",plusss(a));
}
