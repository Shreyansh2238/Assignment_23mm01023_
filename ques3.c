#include<stdio.h>

int main(){
    int days, temp, years, months, weeks, fdays;
    printf("Enter number of days:\n");
    scanf("%d",&days);
    temp=days;
    years= temp/365;
    temp=days%365;
    if(temp<360){
        months=temp/30;
        temp= temp%30;
        weeks=temp/7;
        temp=temp%7;
        fdays=temp;
        printf("Output:\nYears=%d\nMonths=%d\nWeeks=%d\nDays=%d\n",years,months,weeks,fdays);
    }
    else{
        months=11;
        temp= temp-330;
        weeks=temp/7;
        temp=temp%7;
        fdays=temp;
        printf("Output:\nYears=%d\nMonths=%d\nWeeks=%d\nDays=%d\n",years,months,weeks,fdays);
    }
    
    return 0;
}