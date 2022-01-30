#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);


    printf("\nIf Else begins\n");
    if(num>0)
    {
        printf("Positive number");
    }
    else if(num<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }


    printf("\nSwitch begin\n");
    switch(num>0)
    {
        case 1:
            {
                printf("Positive number");
                break;
            }
        case 0:
            {
                switch(num<0)
                {
                    case 1:
                        {
                            printf("Negative");
                            break;
                        }
                    case 0:
                        {
                            printf("Zero");
                            break;
                        }
                }
            }

    }

}

