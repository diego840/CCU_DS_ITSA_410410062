// [C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
#include<stdio.h>
int N;
int main(){
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
        printf("%d*%d=%d\n",i,i,(i*i));
    }
    return 0;
}