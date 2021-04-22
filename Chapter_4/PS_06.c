 #include<stdio.h>
 
 int main()
 
 {  int num,b;
    scanf("%d", &num);
    for (b = 1; num >0; num--)
    {
        b= b*num;
    }
    printf("Pro is %d", b);
    
 
     return 0;
 }