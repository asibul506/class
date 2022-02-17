#include<stdio.h>
main()
{
     int num;
     printf("Enter a number to check whether it is positive, negative or Zero : ");
     scanf("%d",&num);

     if(num>0)
     {
         printf("%d is a positive number.",num);
     }
     else
     {
        if(num<0)
        {
            printf("%d is a negative number.",num);
        }
        else
        {
            printf("Zero");
        }
     }
}
