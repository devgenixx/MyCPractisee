#include<stdio.h>

int main()

{ int P,C,M,T;
printf("Enter Marks for Physics, Chemistry and Mathematics respecctively( Out of 100):\n");
scanf("%d%d%d",&P, &C,&M);

T= ((P+C+M)/3);

if (P<33 || C<33 || M<33 || T<40)
{
    printf(" Damn!! You failed..");
}
else 
{
    printf("Congrats budd! You made it ;p");
}
    return 0;
}