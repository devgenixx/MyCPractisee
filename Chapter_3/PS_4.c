#include<stdio.h>

int main()

{   int year;
    printf("Enter the year:\n\n");
    scanf("%d", &year);
    if (year%4==0)
    {
        printf("year is a leap year");
    }
    else if (year%400==0)
    {
        printf("year is a leap year");
    }
    else if (year%100==0)
    {
        printf("It's not a leap year");
    }
    
    else
    {
        printf("The year is not a leap year");
    }
    

    return 0;
}