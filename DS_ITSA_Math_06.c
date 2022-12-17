// [C_MM06-易] 英哩轉公里
#include<stdio.h>
int a;
double b;
int main(){
    while (scanf("%d",&a) != EOF){
        b = a*1.6;
        printf("%.1lf\n",b);
    }
    return 0;
}