#include<stdio.h>

int main()

{   int a , b= 10, c;
    printf("Enter the value to be take in reverse table\n");
    scanf(" %d", &a);
    while (b>0)
    {   
        c=a*b;
        printf("%d x %d = %d \n", a, b, c);
        b--;
    }
    

    return 0;
}