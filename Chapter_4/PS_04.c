 #include<stdio.h>
 
 int main()
 
 { int a, b, c, sum=0;
    scanf("%d", &a);
    while (b<=10)
    {
        c=a*b;
        printf(" %d X %d= %d \n", a, b, c );
        sum= sum+ c;
        
        b++;
    }
    printf("\n\n Sum is %d\n", sum);
    
 
     return 0;
 }