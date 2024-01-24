#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    (num % 2 != 0 && (num >= 100 && num <= 200)) ? 
        printf("True\n") : printf("False\n");
    return 0;
}