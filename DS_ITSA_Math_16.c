// [C_MM16-易] 判斷座標是否在圓形的範圍內
#include<stdio.h>
int x,y = 0;
int main(){
    scanf("%d %d",&x,&y);
    if (x < 0){
        x*=-1;
    }
    if (y < 0){
        y*=-1;
    }
    if (x+y <= 100){
        printf("inside\n");
    }else{
        printf("outside\n");
    }
    return 0;
}