#include<stdio.h>
#include<stdlib.h>
int m=0, l = 1; 
    int i = 2;
    int array[]={0,1};
int fibonacci_series(int n){
    
    if( n == 1 )
    {
        return array[0];
    }
    else if (n == 2)
    {       return array[1];
    }
    else{
        if(i != n){
        array[i]=array[m]+array[l];
        m++;
        l++;
        i++;
        return fibonacci_series(n);}
        else 
        {
            return array[i];
        }
        
}
    
}

int main(){
    printf(" f %d",fibonacci_series(5));
    return 0;
}