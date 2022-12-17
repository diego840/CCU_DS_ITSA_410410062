// [C_AR04-易] 邊緣偵測
#include<stdio.h>
int n,row,col;
int graph[105][105] = {0};
int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d %d",&row,&col);
        for (int j = 0; j < row; j++){
            for (int k = 0; k < col; k++){
                scanf("%d",&graph[j+1][k+1]);    
            }
        } 
        for (int x = 1; x < row+1; x++){
            for (int y = 1; y < col+1; y++){
                if (graph[x][y] == 0) {
                    printf("_ ");
                }else{
                    if (graph[x+1][y] == 0 || graph[x-1][y] == 0 || graph[x][y-1] == 0 || graph[x][y+1] == 0){
                        printf("0 ");
                    }else{
                        printf("_ ");
                    }   
                }
            }
            printf("\n");
        }
        if (i != n-1){
            printf("\n");
        }
    }
    return 0;
}
// Sample Input:
/*  
2
5 7
0 0 0 0 0 0 0
0 0 1 1 1 0 0
0 1 1 1 1 1 0
0 0 1 1 1 0 0
0 0 0 0 0 0 0
8 11
0 0 0 0 0 0 0 0 0 0 0
0 0 1 1 0 0 0 1 1 0 0
0 1 1 1 1 0 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0 0
0 0 0 1 1 1 1 1 0 0 0
0 0 0 0 1 1 1 0 0 0 0
0 0 0 0 0 1 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 
*/