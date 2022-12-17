// [C_MM07-易] 計算平方值與立方值
#include<stdio.h>
int a;
int main(){
    while (scanf("%d",&a) != EOF){
        printf("%d %d %d\n",a,(a*a),(a*a*a));
    }
    return 0;
}