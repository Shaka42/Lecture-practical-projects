#include <stdio.h>
int area_of_rectangle (int a,int b);

int main(){
    int length, width ;
printf ("enter width>");
scanf ("%d", &width);
printf ("enter length>");
scanf ("%d", &length);

printf ("the_area_is %d",area_of_rectangle(width,length));




    return(0);
}

int area_of_rectangle(int a,int b){
int s = a * b;
return s;
}