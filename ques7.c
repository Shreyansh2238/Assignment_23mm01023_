#include<stdio.h>

int main(){
    float mealPrice, tip, tax,totalTip, totalTax;
    int total;
    printf("Enter the meal price:\n");
    scanf("%f",&mealPrice);
    printf("Enter the tip percentage:\n");
    scanf("%f",&tip);
    printf("Enter the tax percentage:\n");
    scanf("%f",&tax);
    
    totalTip= tip*0.01*mealPrice;
    totalTax= tax*0.01*mealPrice;
    total= mealPrice+totalTip+totalTax;
    printf("The total meal price is:%d and it is stored in %u\n",total, &total);
    return 0;
}