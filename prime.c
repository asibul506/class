#include<stdio.h>
int main()
{
    int num, i, count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            count++;
        }
        printf("\ni = %d  count = %d\n",i,count);
        i=i+1;
    }
    if(count==0)
    {
        printf("\nPrime number");
    }
    else
    {
        printf("\nNot prime number");
    }

}
