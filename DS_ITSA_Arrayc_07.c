// [C_AR07-中] 有違反數獨的規則嗎？
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char matrix_row[10];
int matrix[9][9];
int num[10]={0};
int ans = 0;
int main(){
    memset(matrix,0,sizeof(matrix));
    for (int i = 0; i < 9; i++){
        scanf("%s",matrix_row);
        for (int j = 0; j < 9; j++){
            char a = matrix_row[j];
            matrix[i][j] = atoi(&a);
        }
    }
    for (int i = 0; i < 9; i++){
        memset(num,0,sizeof(num));
        for (int j = 0; j < 9; j++){
            num[matrix[i][j]]++;
            if (num[matrix[i][j]] > 1 && matrix[i][j] != 0){
                printf("row%d #%d\n",(i+1),matrix[i][j]);
                ans = 1;
                break;
            }
        }        
    }
    for (int i = 0; i < 9; i++){
        memset(num,0,sizeof(num));
        for (int j = 0; j < 9; j++){
            num[matrix[j][i]]++;
            if (num[matrix[j][i]] > 1 && matrix[j][i] != 0){
                printf("column%d #%d\n",(i+1),matrix[j][i]);
                ans = 1;
                break;
            }
        }        
    }
    for (int i = 0; i < 9; i+=3){
        memset(num,0,sizeof(num));
        for (int x = i; x < (i+3); x++){
            for (int y= 0; y < 3; y++){
                num[matrix[x][y]]++;
                if (num[matrix[x][y]] > 1 && matrix[x][y]!=0){
                    printf("block%d #%d\n",i+1,matrix[x][y]);
                    x = i+3;
                    ans = 1;
                    break;
                }
            } 
        }
        memset(num,0,sizeof(num));
        for (int x = i; x < (i+3); x++){
            for (int y= 3; y < 6; y++){
                num[matrix[x][y]]++;
                if (num[matrix[x][y]] > 1 && matrix[x][y]!=0){
                    printf("block%d #%d\n",i+2,matrix[x][y]);
                    x = i+3;
                    ans = 1;
                    break;
                }
            } 
        }
        memset(num,0,sizeof(num));
        for (int x = i; x < (i+3); x++){
            for (int y= 6; y < 9; y++){
                num[matrix[x][y]]++;
                if (num[matrix[x][y]] > 1 && matrix[x][y]!=0){
                    printf("block%d #%d\n",i+3,matrix[x][y]);
                    x = i+3;
                    ans = 1;
                    break;
                }
            } 
        } 
    }
    if (ans == 0){
        printf("true\n");
    }
}
// Sample Input:
/*
023456789
456789123
789123456
231564897
564897231
897231564
312605978
645978312
908312645

988459289
956789523
659723456
231564807
504897231
897231564
302605978
605978412
908312605

020456789
496789123
789123456
231564897
564897231
807231564
312605978
645978312
908312645

023452789
156785123
119123456
231564827
534897231
897231564
302605978
645978412
908312645
*/