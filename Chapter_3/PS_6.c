#include<stdio.h>

int main()

{ int a,b,c,d, max1, max2;
    printf("Enter 4 numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b)
    {
        max1= a;
    }
    else max1=b;

    if(c>d)
    max2=c;
    else
    max2=d;

    if(max1>max2)
    printf("Largest digit is %d", max1);
    else
    printf("Largest number is %d", max2);

    return 0;
}