#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, d;  //x= length  y=width  d=diagonal/ korno

    printf("Enter length : ");
    scanf("%f",&x);
    printf("Enter width : ");
    scanf("%f",&y);

    d= sqrt(x*x+y*y);

    printf("Diagonal of the ractangular is : %.2f",d);

    return 0;
}

