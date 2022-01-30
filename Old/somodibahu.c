#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, area;
    printf("a : ");
    scanf("%f",&a);
    printf("b : ");
    scanf("%f",&b);

    area = (b/4)*sqrt(a*a-b*b);

    printf("Area of the triangle is : %.2f square meter",area);

    return 0;
}
