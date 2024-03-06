#include<stdio.h>
#include<stdlib.h>

int m = 0,a=1;
//using the recursion for printing the fibonacci_sequence 
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
    int n=0;
    printf("Enter the numbers of values:");
    scanf("%d",&n);
    fibonacci_sequence(n);
    return 0;
}