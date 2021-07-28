//Write a C program to find whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    if(year%400==0 || (year%4==0 && year%100!=0))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}

