#include<stdio.h>

main()
{
    int a=5;
    switch(a)
    {

    }
    printf("Quiz");
}







    // only 2 conditions
    // True/False
    // if True --> the statements in the if block will be executed
    // if False --> the statements in the else block will be executed
    // Else if --> for checking Multiple conditions

    /*
        A+ (90-100), A (80-89), A- (70-79),
        B (60-69), C(50-59), D (40-49), F(0-39)

        switch(variable){
            case possibleValuesOfTheSwitchVariable:
                {
                    //statements;
                    break;
                }
            ................
            ................

            default:
            {
                //statements;
                break;
            }
        }

        switch(condition){
            case 0:
                {
                    //statements;
                    break;
                }
            case 1:
            {
                //statements;
                break;
            }
        }

    */

  /*  int num, mark;
    printf("Enter your marks: ");
    scanf("%d",&num);

    switch(num>0)
    {
    case 1:
        printf("Positive");
        break;
    case 0:
        switch (num==0)
        {
        case 1:
            printf("Zero");
            break;
        case 0:
            printf("Negetive");
            break;

        }

    }
*/
    /*mark=num/10;

    switch(mark){
    case 0:
    case 1:
    case 2:
    case 3:
        {
            printf("F");
            break;
        }
    case 4:
        {
            printf("F");
            break;
        }
    case 5:
        {
            printf("C");
            break;
        }
    case 6:
        {
            printf("B");
            break;
        }
    case 7:
        {
            printf("A-");
            break;
        }
    case 8:
        {
            printf("A");
            break;
        }
    case 9:
    case 10:
        {
            printf("A+");
            break;
        }
    }*/








/*#include<stdio.h>
int evenOdd(int num);

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    switch(evenOdd(number))
    {
        case 0: {
            printf("Odd");
            break;
        }
        case 1: {
            printf("Even");
            break;
        }
    }
}

int evenOdd(int num)
{
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}*/




/*#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        if(i%2==0){
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}*/
