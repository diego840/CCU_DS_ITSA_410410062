// [C_MM14-易] 計算時間的組合
#include<stdio.h>
int time,days,hours,minutes,seconds = 0;
int main(){
    days = 60*60*24;
    hours = 60*60;
    minutes = 60;
    scanf("%d",&time);
    printf("%d days\n",(time/days));
    time%=days;
    printf("%d hours\n",(time/hours));
    time%=hours;
    printf("%d minutes\n",(time/minutes));
    seconds = time%minutes;
    printf("%d seconds\n",seconds);
    return 0;
}