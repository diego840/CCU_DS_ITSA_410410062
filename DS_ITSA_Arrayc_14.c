// [C_AR14-易] 糖果分享
#include<stdio.h>
#include<string.h>
int N,n,m,L;
int x,y;
int ans = 1;
int class[22][22];
int main(){
    scanf("%d",&N);
    while (N > 0){
        scanf("%d %d %d",&n,&m,&L);
        memset(class,0,sizeof(class));
        for (int i = 0; i < L; i++){
            scanf("%d %d",&x,&y);
            class[x][y] = 1;      //self
            class[x-1][y] = 1;    //front
            class[x+1][y] = 1;    //back
            class[x][y-1] = 1;    //left
            class[x][y+1] = 1;    //right
        }
        for (int i = 1; i <=n && ans!=0; i++){
            for (int j = 1; j <= m; j++){
                if (class[i][j] < 1){
                    ans = 0;
                    break;
                }  
            }
        }
        if (ans){
            printf("Y\n");
        }else{
            printf("N\n");
            ans = 1;
        }        
        N--;
    }
    return 0;
}
// sample Input
/*
3
2 3 1
1 1
4 3 4
1 2
2 2
3 2
4 2
5 4 5
1 3
2 1
3 4
4 1
5 3
*/