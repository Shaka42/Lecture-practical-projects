#include <stdio.h>
int sum(int a, int b);
//void print_hello();

int main(){
int a=6,b =100;
print_hello();

printf("enter the first number:");
scanf("%d", &a);

printf("enter second number:");
scanf("%d", &b);
int add = sum(a,b);
printf("%d",add);

return 0;

}
void print_hello(){
    printf("Hello World\n");
}

int sum(int a, int b){
    int s = a + b;
    return s;
}
