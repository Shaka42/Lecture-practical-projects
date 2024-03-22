#include<stdio.h>

int main(){
    char name[20]={};
    printf("Enter your name->");
    fgets(name,sizeof(name),stdin);// alternative for string.h using gets or puts
    printf("%s",name);
    name[0]='h';
    name[1]='A';
    printf("%s",name);
    return 0;
}