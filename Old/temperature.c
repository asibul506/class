#include<stdio.h>
int main()
{
    int task;
    double c, k, f;

    printf("1. C-->K\n2. K-->C\n3. K-->F\n4. F-->C\nWhat do you want? : ");
    scanf("%d",&task);

    if(task==1)
    {
        printf("Enter the temperature according to Celsius scale : ");
        scanf("%lf",&c);

        k=c+273;
        printf("%.2lf (deg) Celsius = %.2lf (deg) Kelvin",c,k);
    }
    else if(task==2)
    {
        printf("Enter the temperature according to Kelvin scale : ");
        scanf("%lf",&k);

        c=k-273;
        printf("%.2lf (deg) Kelvin = %.2lf (deg) Celsius",k,c);
    }
    else if(task==3)
    {
        printf("Enter the temperature according to Kelvin scale : ");
        scanf("%lf",&k);

        f= ((9*(k-273))/5) + 32;
        printf("%.2lf (deg) Kelvin = %.2lf (deg) Fahrenheit",k,f);

    }
    else
    {
        printf("Please enter a valid input between 1-4!");
    }

    return 0;
}
