// [C_MM18-易] 十進制轉二進制
#include<stdio.h>
int a,x = 0;
int ary[8];
int main(){
    scanf("%d",&a);
    if (a < 0){
        a = ~a; // 2的補述
        x = 1;
        //printf("%d\n",a);
    }
    int i;
    for (i = 0; i < 8; i++){
        ary[i] = a%2;
        a/=2;
    }
    i--;
    if (x){
        for ( ; i >= 0; i--){
            if (ary[i]==0){
                ary[i] = 1;
            }else{
                ary[i] = 0;
            }
        }
    }
    
    for (int i = 7; i >= 0; i--){
        printf("%d",ary[i]);
    }
    printf("\n");
    return 0;
}