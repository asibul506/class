#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 0:
        {
            printf("Odd ");
            if(num<20)
            {
                printf("%d",num+10);
            }
            else
            {
                printf("%d",num);
            }
            break;
        }
        case 1:
        {
            printf("Even ");
            if(num>20)
            {
                printf("%d",num+20);
            }
            else
            {
                printf("%d",num);
            }
            break;
        }
    }

    return 0;
}
