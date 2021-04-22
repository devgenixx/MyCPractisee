#include<stdio.h>

int main()

{ 
    int rating;
    printf("Enter rating from 1 to 5\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Very Poor");
        break;
    case 2: printf("Poor");
    break;
    case 3: printf("Moderate");
    break;
    case 4: printf("Good");
    break;
    case 5: printf("Perfect");
    break;
    
    default:printf("Invalid rating");
        break;
    }

    return 0;
}