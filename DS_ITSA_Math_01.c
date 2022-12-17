// [C_MM01-易] 計算梯型面積
#include<stdio.h>
double x,y,z;
double tmp;
int main(){
    while(scanf("%lf %lf %lf",&x,&y,&z) != EOF){
        tmp = ((x+y)*z)/2;
        printf("Trapezoid area:%.1lf\n",tmp);
    }
    return 0;
}