//Write a program that computes bulldozer
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    double a=0,b=0,c=0,x,y,img,re;
    
    printf("Enter the value of a: ");
    scanf("%lf",&a);

    printf("Enter the value of b: ");
    scanf("%lf",&b);

    printf("Enter the value of c: ");
    scanf("%lf",&c);

    if (pow(b,2)-(4*a*c)>=0){
    //this evaluates the real roots of a quadratic function
    x = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
    y =(-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);

    printf("The values of x: %.1lf and %.1lf \n",x,y);
    }

    else{
    //this evaluates the unreal roots of a quadratic function
        img = (sqrt((pow(b,2)-(4*a*c))*-1))/(2*a);
        re = ((-b/2*a));
        printf("The values of x: %.1lf + %.1lfi\n",re,img);
        printf("The values of x: %.1lf - %.1lfi\n",re,img);
    }
    system("pause");
    
    return (0);
}
