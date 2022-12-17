// [C_MM27-易] 計算兩整數間所有整數的總和
#include<stdio.h>
int x,y,ans = 0;
int main(){
    scanf("%d %d",&x,&y);
    if (x < y){
        int c = (x-y)*(-1);
        ans = ((x+y)*(c+1))/2;
    }else{
        int c = (x-y);
        ans = ((x+y)*(c+1))/2;
    }
    printf("%d\n",ans);
    return 0;
}