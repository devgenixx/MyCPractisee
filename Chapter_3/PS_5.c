#include<stdio.h>

int main()

{ char ch;
    printf("Enter tha character to check:\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)//65-90- uppercase
    {
        printf("The character %c is lowercase", ch);
    }
    else if (ch>=60 && ch<=90)
    {
        printf("The character %c is Uppercase", ch);
    }
    else
    printf("Invalid Input!");

    return 0;
}