// [C_AR16-易] 統一發票對獎
#include<stdio.h>
#include<string.h>
char invoice[4][9];
int N,max,tot = 0;
int award[7];
int N_invoice[3];
char input[9];
int money[7]={2000000,200000,40000,10000,4000,1000,200};
int main(){
    memset(award,0,sizeof(award));
    for (int i = 0; i < 4; i++){
        scanf("%s",&invoice[i]);
    }
    scanf("%d",&N);
    while (N > 0){
        scanf("%s",input);
        if (strncmp(input,invoice[0],8) == 0){
            award[0]++;
        }else{
            for (int i = 1; i < 4; i++){
                int num = 0;
                for (int j = 7; j > -1; j--){
                    if (input[j] == invoice[i][j]){
                        num++;
                    }else{
                        break;
                    }    
                }
                N_invoice[i-1] = num;
            }
            max = N_invoice[0];
            for (int i = 1; i < 3; i++){
                if (N_invoice[i] > max){
                    max = N_invoice[i];
                }
            }
            if (max == 8) award[1]++;
            else if(max == 7) award[2]++;
            else if(max == 6) award[3]++;
            else if(max == 5) award[4]++;
            else if(max == 4) award[5]++;
            else if(max == 3) award[6]++;            
        }
        N--;
    }

    for (int i = 0; i < 7; i++){
        tot += (award[i]*money[i]);
    }
    

    for (int i = 0; i < 6; i++){
        printf("%d ",award[i]);
    }
    printf("%d\n",award[6]);
    printf("%d\n",tot);
    return 0;
}
// sample Input:
/*
14672884
79807980
85312452
94251069
3
79807980
84556452
15661069
*/