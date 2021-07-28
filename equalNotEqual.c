//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first numbers : ");
    scanf("%d",&num1);
    printf("Enter second numbers : ");
    scanf("%d",&num2);


    if(num1 != num2)
    {
        printf("Not Equal");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}
