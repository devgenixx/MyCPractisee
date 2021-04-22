#include<stdio.h>

int main()

{    int i= 2, num, prime=1;
     scanf("%d", &num);
     while(i<num)
     {
         if(num%i==0)
         {
             prime=0;
             break;
         }
         i++;
     }
     if (prime==0)
     {
        printf("The number is not a prime number");
     }
     else
     {
        printf("The number is prime");
     }
     

    return 0;
}