// [C_AR03-易] 計算陣列中所有元素的立方和
#include<stdio.h>
#define n 6
int x[n];
int total = 0;
int main(){
    for (int i = 0; i < n; i++){
        scanf("%d",&x[i]);
        total+=x[i]*x[i]*x[i];
    }
    printf("%d\n",total);
    return 0;
}
// Sample Input:
// 30 20 10 5 34 44