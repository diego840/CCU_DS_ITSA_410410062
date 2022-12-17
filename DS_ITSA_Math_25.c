// [C_MM25-易] 計算正整數被3整除之數值之總和
#include<stdio.h>
int N,total = 0;
int main(){
    scanf("%d",&N);
    for (int i = 1; i <= N; i++){
        if (!(i%3)){
            total+=i;
        }
    }
    printf("%d\n",total);
    return 0;
}