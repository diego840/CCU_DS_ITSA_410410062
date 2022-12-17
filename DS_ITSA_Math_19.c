// [C_MM19-易] 電話費計算
#include<stdio.h>
int x = 0;
double pay_money; 
int main(){
    scanf("%d",&x);
    if (x >= 1500){
        pay_money = (double)((x*0.9)*0.79);
    }else if (x > 800){
        pay_money = (double)((x*0.9)*0.9);
    }else{
        pay_money = (double)(x*0.9);
    }
    printf("%.1lf\n",pay_money);
    return 0;
}