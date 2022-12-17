// [C_MM20-易] 十進位轉十六進位
#include<stdio.h>
int a,ary_index = 0;
int ary[6];
char ABC[]= "ABCDEF";
int main(){
    scanf("%d",&a);
    while ((a/16)){
        ary[ary_index++] = a/16;
        a%=16;    
    }
    ary[ary_index++] = a%16;
    for (int i = 0; i < ary_index; i++){
        if (ary[i]>9){
            int c = ary[i]%10;
            printf("%c",ABC[c]);
        }else{
            printf("%d",ary[i]);
        }
    }
    printf("\n");
    return 0;
}