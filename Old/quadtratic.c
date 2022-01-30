#include<stdio.h>
#include<math.h>
int main()

{
    int a, b, c, x1, x2;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("X1 : %d X2 : %d",x1,x2);
}
