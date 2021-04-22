#include<stdio.h>

int main()

{ 
    int R,H;
    float pi= 3.14;
    printf("Enter the radius of circle:\n");
    scanf("%d", &R);
    printf("The area is %f\n",pi*R*R );
    printf("Enter height:\n");
    scanf("%d",&H);

    printf("The volume of cylinder is %f",pi*R*R*H );

    return 0;
}