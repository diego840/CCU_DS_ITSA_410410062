// [C_MM15-易] 判斷座標是否在正方形的範圍內
#include<stdio.h>
int x,y = 0;
int main(){
    scanf("%d %d",&x,&y);
    if (x <= 100 && y <= 100){
        printf("inside\n");
    }else{
        printf("outside\n");
    }
    
    return 0;
}