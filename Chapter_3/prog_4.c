#include<stdio.h>  //terniary operator

int main()

{
    int a;
    printf("Enter your number:\n");
    scanf("%d", &a);
(a<5)?printf("Your number is less than 5"): printf("Your number is greater than 5");
    

    return 0;
}