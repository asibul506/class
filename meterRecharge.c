#include<stdio.h>
main()
{
    int n, reminder;
    printf("Please enter the hidden 6 digits code : ");
    scanf("%d",&n);

    reminder=n%10;

    if(reminder%2==0)
    {
        printf("Congratulation! you have got 50 taka bonus!\n");
        printf("Now your balance is : %d", 1000+50);
    }
    else
    {
        printf("Sorry! we have to cut 50 taka as service charge!\n");
        printf("Now your balance is : %d", 1000-50);
    }


}

