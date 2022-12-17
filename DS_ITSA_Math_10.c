// 	[C_MM10-易] 攝氏溫度轉華式溫度
#include<stdio.h>
double x,ans;
int main(){
    while (scanf("%lf",&x) != EOF){
        ans = (x*9)/5+32;
        printf("%.1lf\n",ans);
    }
    return 0;
}