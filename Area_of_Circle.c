#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

//Area of a circle
int main(void){
    double r = 0,Area=0;
    printf("Ener the radius of the Circle: ");
    
    scanf("%lf",&r);
    Area = PI * pow(r,2);
    printf("Area: %.2lf",Area);
    return 0;
}