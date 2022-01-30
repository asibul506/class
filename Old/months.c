#include<stdio.h>
int month;

int main()
{

    printf("Enter the month : ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        {
            printf("January 31 days");
            break;
        }
        case 2:
        {
            printf("February 28/29 days");
            break;
        }
        case 3:
        {
            printf("March 31 days");
            break;
        }
        case 4:
        {
            printf("April 30 days");
            break;
        }
        case 5:
        {
            printf("May 31 days");
            break;
        }
        case 6:
        {
            printf("June 30 days");
            break;
        }
        case 7:
        {
            printf("July 31 days");
            break;
        }


        default:
        {
            printf("Enter a valid month");
            break;
        }

    }
    return 0;
}
