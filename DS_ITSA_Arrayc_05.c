// [C_AR05-易] 最少派車數
int time[24];   //0~24 
int src[30]; 
int end[30]; 
int n,max = 0; 
int main(){ 
    memset(time,0,sizeof(time)); 
    memset(src,0,sizeof(src)); 
    memset(end,0,sizeof(end)); 
    scanf("%d",&n); 
    for (int i = 0; i < n; i++){ 
        scanf("%d %d",&src[i],&end[i]); 
    } 
    for (int i = 0; i < n; i++){ 
        for (int j = src[i]; j < end[i]; j++){ 
            time[j]++; 
        } 
    } 
    for (int i = 0; i < 24; i++){ 
        if (time[i] > max){ 
            max = time[i]; 
        } 
    } 
    printf("%d\n",max); 
    return 0; 
}
// Sample Input:
/*
3
1 6 3 12 6 18
*/