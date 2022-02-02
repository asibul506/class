#include<stdio.h>

main()
{
    float a, b, c, x1, x2;
    printf("Enter the value of a, b & c : ");
    scanf("%f %f %f",&a ,&b ,&c);

    x1= (-b + sqrt(b*b-4*a*c))/(2*a);
    x2= (-b - sqrt(b*b-4*a*c))/(2*a);

    printf("x1 : %.2f \nx2 : %.2f",x1,x2);

}
