//LEAP YEAR
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year that you wish to check for Leap year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    return 0;
}