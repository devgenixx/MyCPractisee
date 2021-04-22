#include<stdio.h>

int main()

{
    int principal, rate, years;
    
    printf("Enter value of Principal, Rate and Time period respectively: \n");
    scanf("%d %d %d", &principal, &rate, &years);
    int SI= (principal*rate*years)/100;

    printf("Value of simple interestt is %d", SI);

    return 0;
}