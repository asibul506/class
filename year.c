#include<stdio.h>
int main()
{
    int year,day, hour, minute, second;

    printf("Enter the number of year : ");
    scanf("%d",&year);

    second=year*365*24*60*60;
    minute= year*365*24*60;
    hour = year*365*24;
    day = year*365;

    printf("%d year = %d seconds\n",year,second);
    printf("%d year = %d minutes\n",year, minute);
    printf("%d year = %d hours\n",year,hour);
    printf("%d year = %d days\n",year,day);
    return 0;
}

