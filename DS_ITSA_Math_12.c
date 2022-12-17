// [C_MM12-易] 相遇時間計算
// 100-(30*2.54) =23.8 => 0.238m
#include<stdio.h>
int distance,ans;
double y;
int main(){
    scanf("%d",&distance);
    y = distance/0.238;
    if (y > (int)y){
        ans = y+1;
    }else{
        ans = (int)y;
    }
    printf("%d\n",ans);
    return 0;
}