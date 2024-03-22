#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//function for  converting any number from binary to decimal
int binary_to_decimal(int number){
    double power=0,digit=0,remain_digit=0,original_number = number;

    do{
        (digit = (number%10) );
        remain_digit += (digit*pow(2,power));
        //printf("%lf\n",remain_digit);
        power++;

        number /= 10;

        //printf("%lf\n",number);

    }while (number != 0);

    printf("%d (base2)in decimal = %d ",(int)original_number,(int)remain_digit);
}

int main(){
    int binary_number=0;
    printf("Enter the number:");

    scanf("%d",&binary_number);

    binary_to_decimal(binary_number);
    system("pause");
    return 0;
}