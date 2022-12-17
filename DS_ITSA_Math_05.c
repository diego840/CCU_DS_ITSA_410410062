// [C_MM05-易] 計算正方形面積
#include<stdio.h>
#include<math.h>
double x,tmp;
int main(){
    while (scanf("%lf",&x)!= EOF){
        tmp = x*x;
        tmp = (tmp * 10) + 0.5;
        tmp = tmp/10;
        printf("%.1lf\n",tmp);
    }
    return 0;
}