#include <stdio.h>
#include<string.h>

int main(){
    /*for (int k = 0,n=0; k < 6; k++,n++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }     
       printf("\n"); 
    }
    */
   //infinite loop using for loop
   char name[]={};
   for(;;){
    gets(name);
    puts(name);
   }
    return 0;
}