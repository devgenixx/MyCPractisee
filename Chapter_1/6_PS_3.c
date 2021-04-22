#include<stdio.h>

int main()

{ float celsius,fahn;

    printf("Value of celsius is :\n");
    scanf("%f", &celsius );
    fahn= (celsius*9/5)+32;

    printf("Value of celcius in Fahrenheit is %4.2f", fahn);

    return 0;
}