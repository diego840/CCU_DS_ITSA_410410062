// [C_MM21-易] 算階乘
#include<stdio.h>
int a = 0;
long long int ans = 1;
int main(){
    scanf("%d",&a);
    for (int i = a; i > 0; i--){
        ans*=i;
    }
    printf("%lld\n",ans);
    return 0;
}