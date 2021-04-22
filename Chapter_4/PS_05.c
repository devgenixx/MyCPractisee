#include<stdio.h>

int main()

{   int num, b=1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    while (num>0)
    {
        b= b*num;
        num--;

    }
    printf("Factorial is %d", b);
    

    return 0;
}