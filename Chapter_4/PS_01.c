#include<stdio.h>

int main()

{   int a, b=1, c;
    scanf(" %d", &a);
    
    while (b<=10)
    {
        c=a*b;
        printf(" %d * %d = %d \n", a, b, c);
        b++;
    }
    

    return 0;
}