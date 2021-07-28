//Write a program to identify if a number is even or odd
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : " );
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Even Number!");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
