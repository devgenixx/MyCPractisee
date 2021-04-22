 #include<stdio.h>
 
 int main()
 
 {  int num, prime=1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    for(int i=2; i<num; i++)
    {
        if (num%i==0)
        {
            prime=0;
            break;
        }
        
    }
    if (prime==0)
    {
        printf(" The number is not a prime");
    }
    else
    {
        printf("The number is a prime");
    }
    
    
 
     return 0;
 }