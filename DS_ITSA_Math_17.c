// [C_MM17-易] 求最大公因數
#include<stdio.h>
int a,b,ans = 0;
int GCD(int x,int y){
    if (!(x%y)){
        return y;
    }
    return GCD(y,(x%y));
}
int main(){
    scanf("%d %d",&a,&b);
    if (b>a){
        int temp = a;
        a = b;
        b = temp;
    }
    
    ans = GCD(a,b);
    printf("%d\n",ans);
    return 0;
}