#include<stdio.h>

int main()

{ int a;
     printf("Inter a value to start from\n");
     scanf("%d", &a);
     if (a<20)
       { while (a<15)
        {
           printf("%d\n", a);
           a++;
        }}

        else
        {
            while (a>20)
            {
                printf(" %d\n", a);
                a--;
            }
        }

       
    

    return 0;
}