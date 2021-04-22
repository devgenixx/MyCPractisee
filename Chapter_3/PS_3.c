#include<stdio.h>

int main()

{
    float sal, Tax=0;
    printf("Enter your salary:\n");
    scanf("%f", &sal);
    
    if (sal>250000 && sal<=500000)
    {
        Tax= 0.05*sal;
    }
    else if (sal>500000 && sal<=1000000)
    {
        Tax= 0.2*sal;
    }
    else if (sal>1000000)
    {
        Tax= 0.3*sal;
    }
    
    
    printf("You need to pay:\n %f", Tax);
    

    return 0;
}