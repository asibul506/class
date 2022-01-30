#include<stdio.h>
main()
{
    int number;
    char alphabet;
    float pi = 3.1416;
    double e = 2.1111222334;

    printf("Enter a letter : ");
    scanf("%c",&alphabet);
    scanf("%d",&number);

    printf("\n%d %c %f %f",number, alphabet, pi, e);

}

