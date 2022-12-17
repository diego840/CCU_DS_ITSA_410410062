// [C_MM08-易] 計算兩數和的平方值
#include<stdio.h>
int a,b,c;
int main(){
    while (scanf("%d %d",&a,&b) != EOF){
        c = a+b;
        printf("%d\n",(c*c));
    }
    return 0;
}