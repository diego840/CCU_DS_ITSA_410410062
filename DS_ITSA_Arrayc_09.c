// [C_AR09-易] 兩數差值
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char inp[20];
int num[20];
char *token;
int n,max_num,min_num = 0;
int x = 1;
int commax(const void* a,const void* b){
    return( *(int*)b - *(int*)a );
}
int commin(const void* a,const void* b){
    return( *(int*)a - *(int*)b );
}
int main(){
    scanf("%s",inp);
    token = strtok(inp,",");
    while (token != NULL){
        num[n++] = atoi(token);
        token = strtok(NULL,",");
    }
    qsort(num,n,sizeof(int),commax);
    for (int i = n-1; i >= 0; i--){
        max_num += (num[i]*x);
        x*=10;
    }
    x = 1;
    qsort(num,n,sizeof(int),commin);
    for (int i = n-1; i >= 0; i--){
        min_num += (num[i]*x);
        x*=10;
    }
    printf("%d\n",max_num-min_num);
    return 0;
}
//  Sample Input:
//  1,3,9,7,5