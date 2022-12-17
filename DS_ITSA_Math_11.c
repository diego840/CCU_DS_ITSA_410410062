// [C_MM11-易] 購票計算
#include<stdio.h>
int x,ten,five,one = 0;
int main(){
    scanf("%d",&x);
    ten = x/10;
    x%=10;
    five = x/5;
    x%=5;
    one = x;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",ten,five,one);
    return 0;
}