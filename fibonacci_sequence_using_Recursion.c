#include<stdio.h>
#include<stdlib.h>

int m = 0,a=1;

void fibonacci_sequence(int n){
    int temp;
    if(n != 0){
        printf("%d , ",m);
        temp = m;
        m = m + a;
        a=temp;
        fibonacci_sequence(n-1);
    }
}

int main(){
    fibonacci_sequence(5);
    return 0;
}