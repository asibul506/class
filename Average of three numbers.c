#include<stdio.h>
int main()
{
    float num1, num2, num3, sum, avrg;
 //   printf("Enter the three numbers : ");
//    scanf("%f %f %f",&num1,&num2, &num3);

    printf("first : ");
    scanf("%f",&num1);
    printf("second : ");
    scanf("%f",&num2);
    printf("Third : ");
    scanf("%f",&num3);

    //sum = num1+num2+num3;
    avrg = (num1+num2+num3)/3;
    printf("The average of %.1f, %.1f and %.1f is : %.1f",num1, num2, num3, avrg);
}
