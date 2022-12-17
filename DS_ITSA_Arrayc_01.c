// [C_AR01-易] 一維陣列反轉 I
#include<stdio.h>
int inp[200];
int n = 0,p,x = 0;
int main(){
    while(scanf("%d",&inp[n++]) != EOF);
    p = n-2;
    x = p+1;
    for (int i = 0; i < p; i++){
        int tmp = inp[p];
        inp[p] = inp[i];
        inp[i] = tmp;
        p--;
    }
    for (int i = 0; i < x; i++){
        if (i == x-1){
            printf("%d\n",inp[i]);
        }else{
            printf("%d ",inp[i]);
        }
    }
    return 0;
}
// Sample Input:
/*
4 6 3 69 234
56 89 23 3 1
176 5 890 643 2
0 500 6 634 55 123
87 77 32 22 111 4
*/