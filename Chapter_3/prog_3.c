#include<stdio.h> //Else if

int main()

{
    int num;
    printf("Enter your lucky number between 1 and 5:\n");
    scanf("%d",&num);
    if(num==1)
    {
        printf("%d is always on top!", num);
    }
 else if (num==2)
 {
     printf("%d was your best choice!",num);
 }   
else if (num==3)
{
    printf("%d was your best choice!",num);
}
else if (num==4)
{
    printf("%d was your best choice!",num);
}
else if (num==5)
{
    printf("%d was your best choice!",num);
}
else{
    printf("Invalid input!!");
}

    return 0;
}