// [C_AR02-易] 一維陣列反轉 II
#include<stdio.h>
int num[10];
int main(){
    while (scanf("%d",&num[0])!=EOF){
        for (int i = 1; i < 6; i++){
            scanf("%d",&num[i]);
        }
        for (int j = 5; j > -1; j--){
            if (j == 0){
                printf("%d\n",num[j]);
            }else{
                printf("%d ",num[j]);
            }
        }
    }
    return 0; 
}
// Sample Input:
// 30 20 10 5 34 44