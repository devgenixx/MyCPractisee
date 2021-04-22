 #include<stdio.h>
 
 int main()
 
 {
     int age;
     printf("Enter your age:\n");
     scanf("%d", &age);
     if(age>=18 && age<=70)
     {
         printf("You are elegible for driver's license.");
     }
     else
     {
         printf("Too bad, you can't apply for License");
     }
     return 0;
 }