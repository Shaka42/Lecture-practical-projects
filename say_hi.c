#include <stdio.h>
#define pi 3.14
//defining function
double Area(double radius){
    double Area;
    Area = pi * radius * radius;
    return Area;
}

int 
main(){
printf("The area is %lf",Area(1));
    return 0;
}

/*void say_hi(){
    printf("Hi");
}*/