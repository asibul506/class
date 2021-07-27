#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number between 1 to 100 : ");
    scanf("%d",&num);

    if(num%5==0 || num%3==0)
    {
        printf("you win a car");
    }
    else
    {
        printf("you win nothing");
    }


    return 0;
}
