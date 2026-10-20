#include <stdio.h>
int main(){
    for (int i = 1; i <= 10 ; i++){
        if (i == 4){
            printf("寶箱%d是空的,跳過\n",i);
            continue;
        }else if(i == 8){
            printf("找到神秘寶藏!位於寶藏%d\n",i);
            break;
        }else{
            printf("開啟寶箱%d\n",i);
        }
        
    }
    return 0;
}