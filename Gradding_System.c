#include<stdio.h>
main()
{
    float bangla, english, math, physics, chemistry, avg;

    printf("Bangla : ");
    scanf("%f",&bangla);

    printf("English : ");
    scanf("%f",&english);

    printf("Math : ");
    scanf("%f",&math);

    printf("Physics : ");
    scanf("%f",&physics);

    printf("Chemistry : ");
    scanf("%f",&chemistry);

    avg = (bangla+english+math+physics+chemistry)/5;
    printf("\nAverageis : %.1f",avg);
    printf("\n");
    if(avg>=80 && avg<=100)
    {
        printf("A+");
    }
    if(avg>=70 && avg<80)
    {
        printf("A");
    }
    if(avg>=60 && avg<70)
    {
        printf("A-");
    }
    if(avg>=50 && avg<60)
    {
        printf("B");
    }
    if(avg>=0 && avg<50)
    {
        printf("F");
    }



}
