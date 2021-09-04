//     Write a program to print the given series and calculate the sum for n terms:
//     1 + 11 + 111 + ........


#include<stdio.h>
int main()
{
    int term, first=1, sum=0;
    printf("Enter the number of term : ");
    scanf("%d",&term);

    for(int i=1; i<=term; i++)
    {
        printf("%d + ",first);
        sum+=first;
        first=first*10+1;
    }
    printf("\nSum of the first %d terms is : %d",term, sum);
}
