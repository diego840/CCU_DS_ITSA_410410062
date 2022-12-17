// [C_AR11-易] 最大權重和
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N,m,n,k;
int tmp[11][11];
int max,tot;
int main(){
    memset(tmp,0,sizeof(tmp));
    scanf("%d",&N);
    for (int i = 0; i < N; i++){
        max = 0;
        scanf("%d %d %d",&m,&n,&k);
        for (int j = 0; j < m; j++){
            for (int l = 0; l < n; l++){
                scanf("%d",&tmp[j][l]);
            }
        }
        if (k != 1){
            for (int i = 0; i < (m-k)+1; i++){
                for (int j = 0; j < (n-k)+1; j++){
                    tot = 0;
                    for (int a = i; a < (i+k); a++){
                        for (int b = j; b < (j+k); b++){
                            tot+=tmp[a][b];
                        }
                    }
                    if (tot > max){
                        max = tot;
                    }
                }
            }
            
        }else{
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    if (tmp[i][j] > max){
                        max = tmp[i][j];
                    }
                }
            } 
        }
        printf("%d\n",max);
    }
    return 0;
}
//  Sample Input:
/*
2
4 5 2
2 -3 5 20 -6
10 5 7 3 1
-1 3 1 0 6
12 -5 -10 15 0
2 3 1
10 5 -1
2 -3 1
*/