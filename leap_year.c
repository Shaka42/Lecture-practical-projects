#include<stdio.h>
#include<stdlib.h>

void check_leap(int b){
    if((b%4==0 && b%100 !=0) || b%400 == 0){
        printf("%d is Leap year\n",b);
    }
    else{
        printf("%d is not leap year\n",b);
    }
}

int main(){
    int n = 2000;
    //printf("Enter the year:");
    //scanf("%d",&n);
    for (int i = 0; i < 31; i++,n++)
    {
        check_leap(n);
    }
    return 0;
}