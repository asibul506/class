#include<stdio.h>
main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    if(year % 400 == 0)
    {
        printf("Lip year");
    }

    else if(year%100 !=0 && year%4==0)
    {
        printf("Lip Year");
    }
    else
    {
        printf("Not Lip Year");
    }

}
